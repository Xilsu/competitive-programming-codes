/*
Luis Henrique Morelli
URI - 1148
Países em Guerra
*/

#include <bits/stdc++.h>

using namespace std;

int dijkstra(vector<pair<int, int>> adjList[], int source, int end, int n){
    vector<int> dist (n + 1, INT_MAX);
    priority_queue<pair<int, int>> q;

    q.push({dist[source] = 0, source});

    while(!q.empty()){
        int node = q.top().second;
        q.pop();

        for(int i = 0; i < adjList[node].size(); i++){
            int to = adjList[node][i].first, w = adjList[node][i].second;

            if(dist[to] > dist[node] + w){
                dist[to] = dist[node] + w;

                q.push({-dist[to], to});
            }
        }
    }

    return dist[end];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, e;

    while(cin >> n >> e){
        if(n == 0 && e == 0){
            break;
        }

        vector<pair<int, int>> adjList[n + 1];

        for(int i = 0; i < e; i++){
            int a, b, w;

            cin >> a >> b >> w;

            adjList[a].push_back({b, w});

            for(int j = 0; j < adjList[b].size(); j++){
                if(adjList[b][j].first == a){
                    adjList[b][j].second = 0;
                    adjList[a].back().second = 0;

                    break;
                }
            }
        }

        int k;

        cin >> k;

        for(int i = 0; i < k; i++){
            int o, d;

            cin >> o >> d;

            int dist = dijkstra(adjList, o, d, n);

            if(dist == INT_MAX){
                cout << "Nao e possivel entregar a carta";
            }
            else{
                cout << dist;
            }

            cout << "\n";
        }

        cout << "\n";
    }

    return 0;
}