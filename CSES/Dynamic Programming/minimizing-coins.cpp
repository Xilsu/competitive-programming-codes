/*
    Luis Henrique Morelli
    Minimizing Coins
    https://cses.fi/problemset/task/1634/
*/

#include <bits/stdc++.h>
 
#define MAX
#define MOD
 
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
 
    vector<int> c (n + 1);
 
    for(int i = 1; i <= n; i++)
        cin >> c[i];
 
    vector<int> dp (sum + 1, 1e7);
 
    dp[0] = 0;
 
    for(int i = 1; i <= sum; i++)
        for(int j = 1; j <= n; j++)
            if(c[j] <= i)
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
        
    cout << (dp[sum] == 1e7 ? -1 : dp[sum]) << "\n";
 
    return 0;
}