//Luis Henrique Morelli
//https://codeforces.com/contest/510/problem/B
//03/09/2020

#include <bits/stdc++.h>

#define MAX 50

using namespace std;

vector<pair<int, int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
char currColor;
int N, M;

bool dfs(vector<string> g, int row, int col, int prevRow, int prevCol, int k, vector<vector<bool>> &visited){
    if(row < 0 || row >= N || col < 0 || col >= M){
        return false;
    }
    else if(g[row][col] != currColor){
        return false;
    }
    else if(visited[row][col]){
        if(k >= 4){
            return true;
        }

        return false;
    }
    
    visited[row][col] = true;

    for(int i = 0; i < 4; i++){        
        int nextRow, nextCol;
        
        nextRow = row + dir[i].first;
        nextCol = col + dir[i].second;
        
        if(nextRow != prevRow || nextCol != prevCol){
            if(dfs(g, nextRow, nextCol, row, col, k + 1, visited)){
                return true;
            }
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> N >> M;

    vector<string> grid;

    for(int i = 0; i < N; i++){
        string aux;

        cin >> aux;

        grid.push_back(aux);
    }

    vector<vector<bool>> visited (MAX + 1, vector<bool> (MAX + 1, false));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!visited[i][j]){
                currColor = grid[i][j];
                
                if(dfs(grid, i, j, -1, -1, 0, visited)){
                    cout << "Yes\n";

                    return 0;
                }
            }
        }
    }

    cout << "No\n";

    return 0;
}