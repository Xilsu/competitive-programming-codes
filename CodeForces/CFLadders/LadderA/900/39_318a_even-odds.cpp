/*
    Luis Henrique Morelli
    318A - Even Odds
    https://codeforces.com/contest/318/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, k;
 
    cin >> n >> k;
 
    if(n % 2 != 0)
        n++;
 
    ll half = n / 2;
 
    if(k <= half)
        cout << k * 2 - 1 << "\n";
    else
        cout << (k - half) * 2 << "\n";
 
    return 0;
}