//Luis Henrique Morelli
//https://codeforces.com/problemset/problem/115/A
//03/09/2020

#include <bits/stdc++.h>

#define MAX 2000

using namespace std;

int dfs(vector<vector<int>> g, int node, int aux){
    int size;

    size = aux;

    for(int i = 0; i < g[node].size(); i++){
        int to;

        to = g[node][i];
        
        size = max(size, dfs(g, to, aux + 1));
    }

    return size;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;

    cin >> N;

    vector<vector<int>> adjList (N + 1);
    vector<int> sup;

    for(int i = 1; i <= N; i++){
        int a;

        cin >> a;

        if(a != -1){
            adjList[a].push_back(i);
        }
        else{
            sup.push_back(i);
        }
    }

    int groups;

    groups = 0;

    for(int i = 0; i < sup.size(); i++){
        int aux;
    
        aux = dfs(adjList, sup[i], 1);

        if(aux > groups){
            groups = aux;
        }
    }

    cout << groups << "\n";

    return 0;
}