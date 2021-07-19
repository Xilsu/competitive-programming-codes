#include <bits/stdc++.h>

#define MAX 1000
#define WHITE 0
#define GRAY 1
#define BLACK 2

using namespace std;

void dfs(vector<int> adjList[], int node, vector<int> &state, vector<int> &path, bool &cycle) {
    state[node] = GRAY;
    
    for(long i = 0; i < adjList[node].size(); i++){
        if(cycle){
            return;
        }
        
        int to;

        to = adjList[node][i];

        if(state[to] == WHITE){
            dfs(adjList, to, state, path, cycle);

            path[to] += 1;
        }
        else if(state[to] == GRAY){
            cycle = true;
            
            return;
        }
        else{
            path[to] += 1;
        }
    }

    state[node] = BLACK;
}

int topSort(vector<int> adjList[], int N){
    vector<int> state (MAX + 1, WHITE);
    vector<int> path (MAX + 1, 0);
    bool cycle;

    cycle = false;

    for(int i = 1; i <= N; i++){
        if(state[i] == WHITE){
            dfs(adjList, i, state, path, cycle);

            if(cycle){
                break;
            }
        }
    }

    if(cycle){
        return 0;
    }

    sort(path.begin() + 1, path.begin() + N + 1);

    return min(path[N], 2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long m;

    while(cin >> n >> m && (n != 0 || m != 0)){
        vector<int> adjList[n + 2];

        for(long i = 0; i < m; i++){
            int a, b;

            cin >> a >> b;

            adjList[a].push_back(b);
        }
        
        cout <<  topSort(adjList, n) << endl;
    }

    return 0;
}