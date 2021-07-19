/*
Luis Henrique Morelli
URI - 2294
Duende Perdido
*/

#include <bits/stdc++.h>

#define MAX 10

using namespace std;

int n, m, minPath = INT_MAX;

void dfs(int maze[][MAX], int x, int y, int path){
    if(x < 0 || x >= n || y < 0 || y >= m || maze[x][y] == 2 || path > minPath){
        return;
    }
    if(maze[x][y] == 0){
        minPath = path;

        return;
    }
    
    maze[x][y] = 2;

    dfs(maze, x + 1, y, path + 1);
    dfs(maze, x - 1, y, path + 1);
    dfs(maze, x, y + 1, path + 1);
    dfs(maze, x, y - 1, path + 1);

    maze[x][y] = 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    int maze[MAX][MAX], x, y;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> maze[i][j];

            if(maze[i][j] == 3){
                x = i;
                y = j;
            }
        }
    }

    dfs(maze, x, y, 0);

    cout << minPath << "\n";

    return 0;
}