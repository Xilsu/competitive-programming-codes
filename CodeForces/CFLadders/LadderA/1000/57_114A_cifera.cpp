/*
    Luis Henrique Morelli
    114A - Cifera
    https://codeforces.com/contest/114/problem/A
*/

#include <bits/stdc++.h>

#define MAX 2147483648

using namespace std;

typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll k, l;

    cin >> k >> l;

    ll importance = 0;
    bool flag = false;

    for(ll i = k; i < MAX; i *= k){
        if(i > l)
            break;
        else if(i == l){
            flag = true;
            
            break;
        }
            
        importance++;
    }

    if(flag)
        cout << "YES\n" << importance << "\n";
    else
        cout << "NO\n";
 
    return 0;
}