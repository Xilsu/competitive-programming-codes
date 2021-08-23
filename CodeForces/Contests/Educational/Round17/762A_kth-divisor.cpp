/*
    Luis Henrique Morelli
    762A - k-th divisor
    https://codeforces.com/contest/762/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

vector<ll> divisors(ll n){
    vector<ll> div;

    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            div.push_back(i);

            if(n / i != i)
                div.push_back(n / i);
        }
    }

    return div;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, k;

    cin >> n >> k;

    vector<ll> div = divisors(n);

    sort(div.begin(), div.end());

    if(div.size() >= k)
        cout << div[k - 1] << "\n";
    else
        cout << "-1\n";

    return 0;
}