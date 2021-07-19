#include <bits/stdc++.h>

#define MAX 100

using namespace std;

bool bicoloring(vector<vector<int>> graph, int N, int start, vector<int> &color, vector<bool> &visited){
    vector<int> degree (MAX + 1, 0);
    queue<int> queue;

    queue.push(start);

    while(!queue.empty()){
        int node;

        node = queue.front();
        queue.pop();

        visited[node] = true;

        for(int i = 0; i < graph[node].size(); i++){
            int to;

            to = graph[node][i];
            
            if(degree[to] == 0){
                degree[to] += degree[node] + 1;
                color[to] = degree[to] % 2;

                queue.push(to);
            }
            else if(color[to] == color[node]){
                return true;
            }
        }
    }

    return false;
}

vector<vector<int>> readGraph(int N){
    vector<vector<int>> adjList (MAX + 1);

    for(int i = 1; i <= N; i++){
        int b;

        while(cin >> b && b != 0){
            adjList[i].push_back(b);
            adjList[b].push_back(i);
        }
    }

    return adjList;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;

    vector<vector<int>> adjList;
    vector<int> color (MAX + 1, 0);
    vector<bool> visited (MAX + 1, false);
    bool flag;

    adjList = readGraph(N);

    for(int j = 1; j <= N; j++){
        if(!visited[j]){
            flag = bicoloring(adjList, N, j, color, visited);
        }

        if(flag){
            cout << "-1";
            
            break;
        }
    }

    if(!flag){
        for(int j = 1; j <= N; j++){
            cout << color[j];
        }
    }

    cout << endl;

    return 0;
}