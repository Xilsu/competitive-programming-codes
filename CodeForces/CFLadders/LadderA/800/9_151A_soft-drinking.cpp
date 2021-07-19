/*
    Luis Henrique Morelli
    151A - Soft Drinking
    https://codeforces.com/contest/151/problem/A
*/

#include <bits/stdc++.h>

#define MAX 

using namespace std;

typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, k, l, c, d, p, nl, np;
 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    k = (k * l) / nl;
    c = c * d;
    p = p / np;
 
    cout << min(k, min(c, p)) / n;
 
    return 0;
}