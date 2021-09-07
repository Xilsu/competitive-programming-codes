/*
    Luis Henrique Morelli
    961A - Tetris
    https://codeforces.com/contest/961/problem/A
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

    int n, m;

    cin >> n >> m;

    vi c (n, 0);
    int in;

    for(int i = 0; i < m; i++){
        cin >> in;
        c[in - 1]++;
    }

    cout << *min_element(c.begin(), c.end()) << "\n";

    return 0;
}