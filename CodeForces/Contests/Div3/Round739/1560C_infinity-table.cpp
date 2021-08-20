/*
    Luis Henrique Morelli
    1560C - Infinity Table
    https://codeforces.com/contest/1560/problem/C
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll t;

    cin >> t;

    while(t--){
        ll n;

        cin >> n;

        ll i;

        for(i = 1; i * i < n; i++);

        int j = i * i - n + 1;

        if(j > i){
            int aux = j - i;
            j = i;
            i -= aux;
        }

        cout << i << " " << j << "\n";
    }
 
    return 0;
}