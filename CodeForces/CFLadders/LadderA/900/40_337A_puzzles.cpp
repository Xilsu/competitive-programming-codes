/*
    Luis Henrique Morelli
    337A - Puzzles
    https://codeforces.com/contest/337/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
 
    cin >> n >> m;
 
    vector<int> puzzlePieces (m);
 
    for(int i = 0; i < m; i++)
        cin >> puzzlePieces[i];
 
    sort(puzzlePieces.begin(), puzzlePieces.end());
 
    int minPossible = puzzlePieces[n - 1] - puzzlePieces[0];
 
    for(int i = 1; i <= m - n; i++)
        minPossible = min(minPossible, puzzlePieces[i + n - 1] - puzzlePieces[i]);
 
    cout << minPossible << "\n";
 
    return 0;
}