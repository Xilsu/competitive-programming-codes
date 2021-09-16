/*
    Luis Henrique Morelli
    Coin Combinations I
    https://cses.fi/problemset/task/1635/
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
 
    int n, sum;
 
    cin >> n >> sum;
 
    vi c (n + 1);
 
    for(int i = 1; i <= n; i++)
        cin >> c[i];
 
    vi dp (sum + 1);
 
    dp[0] = 1;
 
    for(int i = 1; i <= sum; i++){
        for(int j = 1; j <= n; j++){
            if(c[j] <= i){
                dp[i] = dp[i] + dp[i - c[j]];
                dp[i] %= MOD;
            }
        }
    }
 
    cout << dp[sum];
 
    return 0;
}