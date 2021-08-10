
/*
    Luis Henrique Morelli
    598A - Tricky Sum
    https://codeforces.com/contest/598/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;
 
    cin >> t;
 
    while(t--){
        ll n;
 
        cin >> n;
 
        ll sum = n * (n + 1) / 2;
 
        for(ll i = 1; i <= n; i *= 2)
            sum -= 2 * i;
 
        cout << sum << "\n";
    }
 
    return 0;
}