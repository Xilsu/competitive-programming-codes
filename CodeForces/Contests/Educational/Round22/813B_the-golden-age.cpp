/*
    Luis Henrique Morelli
    813B - The Golden Age
    https://codeforces.com/contest/813/problem/B
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long l;
typedef long long ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll x, y, l, r;
    
    cin >> x >> y >> l >> r;
    
    ll lengthX = log(r) / log(x), lengthY = log(r) / log(y);
    vector<ll> powX, powY;
    
    powX.push_back(1);
    powY.push_back(1);
    
    for(ll i = 1; i <= lengthX; i++)
        powX.push_back(powX[i - 1] * x);
        
    set<ll> unlucky;
    
    for(ll i = 0; i <= lengthY; i++){
        if(i != 0)
            powY.push_back(powY[i - 1] * y);
        
        for(ll j = 0; j <= lengthX; j++){
            ll sum = powX[j] + powY[i];
            
            if(sum >= l && sum <= r)
                unlucky.insert(sum);
        }
    }
    
    if(unlucky.empty()){
        cout << r - l + 1 << "\n";
    }
    else{
        ll count = 0, prev = l - 1;
    
        for(auto &it : unlucky){
            count = max(count, it - prev - 1);
    
            prev = it;
        }
    
        cout << max(count, r - prev) << "\n";
    }
    
    return 0;
}