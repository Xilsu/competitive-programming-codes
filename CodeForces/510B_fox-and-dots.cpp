/*
    Luis Henrique Morelli
    510B - Fox And Two Dots
    https://codeforces.com/contest/510/problem/B
*/

#include <bits/stdc++.h>
 
#define MAX 50
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

pair<int, int> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
int n, m;

bool dfs(string matrix[], int row, int col, int prevRow, int prevCol, char color, int count, bool visited[][MAX]){
    if(row < 0 || row >= n || col < 0 || col >= m )
        return false;
    else if(matrix[row][col] != color)
        return false;
    else if(visited[row][col]){
        if(count >= 4)
            return true;
        
        return false;
    }

    visited[row][col] = true;

    for(int i = 0; i < 4; i++){
        int nextRow = row + dir[i].first, nextCol = col + dir[i].second;

        if((nextRow != prevRow || nextCol != prevCol) 
            && dfs(matrix, nextRow, nextCol, row, col, color, count + 1, visited))
            return true;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    string matrix[MAX];

    for(int i = 0; i < n; i++)
        cin >> matrix[i];

    bool visited[MAX][MAX];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            visited[i][j] = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j] 
                && dfs(matrix, i, j, -1, -1, matrix[i][j], 0, visited)){
                cout <<"Yes\n";

                return 0;
            }
        }
    }
            
    cout << "No\n";

    return 0;
}