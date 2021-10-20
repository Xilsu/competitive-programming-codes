/*
    Luis Henrique Morelli
    Array Description
    https://cses.fi/problemset/task/1746
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
    
    int n, m;

    cin >> n >> m;

    vi arr (n + 1);

    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    vector<vi> dp (n + 2, vi (m + 2));
    int lower, upper;
        
    for(int i = 1; i <= n; i++){
        if(arr[i] == 0 && arr[i - 1] == 0){
            lower = 1;
            upper = m;
        }
        else if(arr[i] == 0 && arr[i - 1] != 0){
            arr[i - 1] - 1 == 0 ? lower = 1 : lower = arr[i - 1] - 1;
            arr[i - 1] + 1 > m ? upper = m :upper = arr[i - 1] + 1;
        }
        else
            lower = upper = arr[i];

        for(int j = lower; j <= upper; j++){
            if(i == 1){
                dp[i][j] = 1;
                continue;
            }

            dp[i][j] += ((dp[i - 1][j - 1] + dp[i - 1][j]) % MOD + dp[i - 1][j + 1]) % MOD;
        }
    }

    ll ans = 0;

    for(int i = 1; i <= m; i++)
        ans = (ans + dp[n][i]) % MOD;

    cout << ans << "\n";

    return 0;
}