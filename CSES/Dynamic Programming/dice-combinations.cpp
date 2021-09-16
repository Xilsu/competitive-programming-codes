/*
    Luis Henrique Morelli
    Dice Combinations
    https://cses.fi/problemset/task/1633/
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
 
    ll n;
 
    cin >> n;
 
    vector<ll> dp (n + 1);
 
    dp[0] = 1;
    dp[1] = 1;
 
    for(ll i = 2; i <= 6; i++)
        dp[i] = (dp[i - 1] << 1);
 
    for(ll i = 7; i <= n; i++)
        for(int j = 1; j <= 6; j++)
            dp[i] = (dp[i] % MOD + dp[i - j] % MOD) % MOD;
 
    cout << dp[n] << "\n";
 
    return 0;
}