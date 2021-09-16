/*
    Luis Henrique Morelli
    LKS - Large Knapsack
    https://www.spoj.com/problems/LKS/
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

    int k, n;

    cin >> k >> n;

    vector<int> dp (k + 1);

    for(int i = 1; i <= n; i++){
        int v, w;

        cin >> v >> w;

        for(int j = k; j >= w; j--)
            dp[j] = max(dp[j], dp[j - w] + v);
    }

    cout << *max_element(dp.begin(), dp.end()) << "\n";

    return 0;
}