/*
    Luis Henrique Morelli
    445A - DZY Loves Chessboard
    https://codeforces.com/problemset/problem/445/A
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

    string chessboard[n];

    for(int i = 0; i < n; ++i)
        cin >> chessboard[i];

    string tiles = "BW";
    int color;

    for(int i = 0; i < n; ++i){
        color = i % 2;

        for(int j = 0; j < m; ++j){
            if(chessboard[i][j] != '-')
                cout << tiles[color];
            else
                cout << '-';

            color = color == 0 ? 1 : 0;
        }

        cout << "\n";
    }

    return 0;
}