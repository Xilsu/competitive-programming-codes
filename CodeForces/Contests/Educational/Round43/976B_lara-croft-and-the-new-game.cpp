/*
    Luis Henrique Morelli
    976B - Lara Croft and the New Game
    https://codeforces.com/contest/976/problem/B
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

    ll n, m, k;

    cin >> n >> m >> k;

    if(k < n)
        cout << k + 1 << " 1\n";
    else if(k <= n + m - 2)
        cout << n << " " << k - n + 2;
    else{
        ll up = (k - n) / (m - 1), mov = (k - n) % (m - 1), row = n - up;

        if(row % 2 == 0)
            cout << row << " " << 2 + mov;
        else
            cout << row << " " << m - mov;
    }     

    return 0;
}