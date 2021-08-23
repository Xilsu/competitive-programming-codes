/*
    Luis Henrique Morelli
    762B - USB vs. PS/2
    https://codeforces.com/contest/762/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

bool cmp(ll a, ll b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, m;

    cin >> a >> b >> c >> m;

    vector<ll> usb, ps2;
    string type;
    ll price;

    for(ll i = 0; i < m; i++){
        cin >> price >> ws >> type;

        if(type == "USB")
            usb.push_back(price);
        else
            ps2.push_back(price);
    }

    sort(usb.begin(), usb.end(), cmp);
    sort(ps2.begin(), ps2.end(), cmp);

    ll spent = 0, count = 0;

    while(!usb.empty() && a){
        spent += usb.back();
        
        usb.pop_back();
        count++;
        a--;
    }

    while(!ps2.empty() && b){
        spent += ps2.back();
        
        ps2.pop_back();
        count++;
        b--;
    }

    while((!usb.empty() || !ps2.empty()) && c){
        ll usbPrice = LONG_LONG_MAX, ps2Price = LONG_LONG_MAX;

        if(!usb.empty())
            usbPrice = usb.back();

        if(!ps2.empty())
            ps2Price = ps2.back();
        
        if(usbPrice < ps2Price){
            spent += usbPrice;

            usb.pop_back();
        }
        else{
            spent += ps2Price;

            ps2.pop_back();
        }

        count++;
        c--;
    }

    cout << count << " " << spent << "\n";

    return 0;
}