/*
    Luis Henrique Morelli
    Grid Paths
    https://cses.fi/problemset/task/1638/
*/

#include <bits/stdc++.h>
 
#define MAX
#define MOD 1000000007
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
 
    cin >> n;
 
    vector<vector<char>> mat (n + 1, vector<char> (n + 1));
    vector<vector<int>> dp (n + 1, vector<int> (n + 1, 0));
 
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> mat[i][j];
 
    if(mat[1][1] == '*'){
        cout << "0\n";
 
        return 0;
    }
 
    dp[1][1] = 1;
 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(mat[i][j] != '*'){
                dp[i][j] += dp[i][j - 1] + dp[i - 1][j];
                dp[i][j] %= MOD;
            }
        }
    }
 
    cout << dp[n][n] << "\n";    
 
    return 0;
}