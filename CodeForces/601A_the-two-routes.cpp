/*
    Luis Henrique Morelli
    601A - The Two Routes
    https://codeforces.com/contest/601/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

int dijkstra(vector<int> adjList[], int source, int n){
    priority_queue<pair<int, int>> heap;
    int dist[n + 1];

    for(int i = 1; i <= n; i++)
        dist[i] = INT_MAX;

    dist[source] = 0;
    heap.push({dist[source] , source});

    while(!heap.empty()){
        int at = heap.top().second;

        heap.pop();

        for(unsigned int i = 0; i < adjList[at].size(); i++){
            int to = adjList[at][i];

            if(dist[at] + 1 < dist[to]){
                dist[to] = dist[at] + 1;

                heap.push({-dist[to], to});
            }
        }
    }

    return dist[n];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    cin >> n >> m;

    vector<int> graphA[n + 1];

    for(int i = 0; i < m; i++){
        int a, b;

        cin >> a >> b;

        graphA[a].push_back(b);
        graphA[b].push_back(a);
    }

    vector<int> graphB[n + 1];
    bool empty = true;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j)
                continue;
            
            bool flag = false;

            for(unsigned int k = 0; k < graphA[i].size(); k++){
                if(graphA[i][k] == j){
                    flag = true;

                    break;
                }
            }  

            if(!flag){
                graphB[i].push_back(j);

                empty = false;
            }
        }
    }

    if(empty)
        cout << "-1\n";
    else{
        int distance = dijkstra(graphA, 1, n);

        distance = max(distance, dijkstra(graphB, 1, n));

        if(distance == INT_MAX)
            cout << "-1\n";
        else
            cout << distance << "\n";
    }

    return 0;
}