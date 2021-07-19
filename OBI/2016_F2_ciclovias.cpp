/*
Luis Henrique Morelli
Ciclovias - OBI 2016
https://olimpiada.ic.unicamp.br/pratique/p2/2016/f2/ciclovias/
*/

#include <bits/stdc++.h>

#define MAX 100001

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long N;
    long long M;

    cin >> N >> M;

    vector<int> adjList[N + 1];

    for(long long i = 0; i < M; i++){
        long a, b;

        cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for(long i = 1; i <= N; i++){
        sort(adjList[i].begin(), adjList[i].end());
    }

    long long dp[N + 1], suffix[N + 1];

    for(long i = 1; i <= N; i++){
        dp[i] = 1;
    }

    for(long i = N; i >= 1; i--){
        suffix[adjList[i].size()] = 0;
        
        for(long j = adjList[i].size() - 1; j >= 0; j--){
            suffix[j] = max(dp[adjList[i][j]], suffix[j + 1]);
        }
        
        for(int j = 0; j < adjList[i].size(); j++){
            dp[adjList[i][j]] = max(dp[adjList[i][j]], suffix[j + 1] + 2);
        }
    }

    cout << dp[1];

    for(long i = 2; i <= N; i++){
        cout << " " << dp[i];
    }

    cout << "\n";

    return 0;
}