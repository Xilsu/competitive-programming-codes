#include <bits/stdc++.h>

using namespace std;

long long knap(vector<long long> it, long long n, long long w){
    vector<vector<long long>> dp (n + 1, vector<long long> (w + 1));

    for(long long i = 1; i <= n; i++){
        for(long long j = 1; j <= w; j++){
            if(it[i - 1] > j){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                 dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - it[i - 1]] + it[i - 1]);
            }
        }
    }

    return dp[n][w];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, w;

    cin >> n >> w;

    vector<long long> itens, qt;

    for(long long i = 0; i < n; i++){
        long long aux;

        cin >> aux;

        itens.push_back(aux);
        qt.push_back(2);
    }

    long long counter = 0;

    if(knap(itens, n, qt, w) == w){
        counter++;
    }

    cout << counter << "\n";

    return 0;
}