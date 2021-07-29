/*
    Luis Henrique Morelli
    103A - Testing Pants for Sadness
    https://codeforces.com/contest/103/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;

    cin >> n;

    ll variants = 0, input;

    for(l i = 0; i < n; i++){
        cin >> input;

        variants += input + (input - 1) * i;
    }

    cout << variants << "\n";
        
    return 0;
}