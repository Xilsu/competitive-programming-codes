/*
    Luis Henrique Morelli
    KNAPSACK - The Knapsack Problem
    https://www.spoj.com/problems/KNAPSACK/
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

    int s, n;

    cin >> s >> n;

    vector<int> dp (s + 1);

    for(int i = 1; i <= n; i++){
        int w, p;

        cin >> w >> p;

        for(int j = s; j >= w; j--)
            dp[j] = max(dp[j], dp[j - w] + p);
    }

    cout << *max_element(dp.begin(), dp.end()) << "\n";

    return 0;
}