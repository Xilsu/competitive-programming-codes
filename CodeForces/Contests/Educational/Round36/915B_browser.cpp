/*
    Luis Henrique Morelli
    915B - Browser
    https://codeforces.com/contest/915/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, pos, l, r;

    cin >> n >> pos >> l >> r;

    if(l == 1 && r == n)
        cout << "0\n";
    else if(l == 1 && r != n)
        cout << abs(pos - r) + 1 << "\n";
    else if(l != 1 && r == n)
        cout << abs(pos - l) + 1 << "\n";
    else
        cout << min(abs(pos - l) + abs(l - r), abs(pos - r) + abs(r - l)) + 2 << "\n";

    return 0;
}