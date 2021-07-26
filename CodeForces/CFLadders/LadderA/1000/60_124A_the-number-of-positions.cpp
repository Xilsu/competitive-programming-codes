/*
    Luis Henrique Morelli
    124A - The number of positions
    https://codeforces.com/contest/124/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, a, b;

    cin >> n >> a >> b;

    n -= a;

    cout << min(n, b + 1) << "\n";

    return 0;
}