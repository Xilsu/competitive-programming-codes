/*
Luis Henrique Morelli
URI - 1076
Desenhando Labirintos
*/

#include <bits/stdc++.h>

using namespace std;

int bfs(vector<int> adjList[], int source, int v){
    vector<bool> visited (v + 1);
    queue<int> q;
    int moves = 0;

    q.push(source);
    visited[source] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int i = 0; i < adjList[node].size(); i++){
            int to = adjList[node][i];
            
            if(!visited[to]){
                moves += 2;

                q.push(to);
                visited[to] = true;
            }
        }
    }

    return moves;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--){
        int n, v, a;

        cin >> n >> v >> a;

        vector<int> adjList[v + 1];

        for(int i = 0; i < a; i++){
            int from, to;

            cin >> from >> to;

            adjList[from].push_back(to);
            adjList[to].push_back(from);
        }

        cout << bfs(adjList, n, v) << "\n";
    }

    return 0;
}