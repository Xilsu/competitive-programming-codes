/*
Luis Henrique Morelli
URI - 1774
Roteadores
*/

#include <bits/stdc++.h>

using namespace std;

int prim(vector<pair<int, int>> adjList[], int source, int n){
    int dist[n + 1];
    int cost = 0;

    for(int i = 0; i <= n; i++){
        dist[i] = INT_MAX;
    }

    priority_queue<pair<int, int>> q;
    vector<bool> visited (n + 1);

    q.push({dist[source] = 0, source});

    while(!q.empty()){
        int node = q.top().second;
        q.pop();

        if(!visited[node]){
            cost += dist[node];
            visited[node] = true;
        }

        for(int i = 0; i < adjList[node].size(); i++){
            int to = adjList[node][i].first, w = adjList[node][i].second;
            
            if(!visited[to] && dist[to] > w){
                dist[to] = w;

                q.push({-dist[to], to});
            }
        }
    }

    return cost;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, c;

    cin >> r >> c;

    vector<pair<int, int>> adjList[r + 1];

    for(int i = 0; i < c; i++){
        int a, b, w;

        cin >> a >> b >> w;

        adjList[a].push_back({b, w});
        adjList[b].push_back({a, w});
    }

    cout << prim(adjList, 1, r) << "\n";

    return 0;
}