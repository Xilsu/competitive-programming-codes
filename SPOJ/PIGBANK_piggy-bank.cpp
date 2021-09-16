/*
    Luis Henrique Morelli
    PIGBANK - Piggy-Bank
    https://www.spoj.com/problems/PIGBANK/
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

    int t;

    cin >> t;

    while(t--){
        int e, f, n;

        cin >> e >> f >> n;

        f -= e;

        vector<int> p (n + 1), w (n + 1), dp (f + 1, 1e7);

        for(int i = 1; i <= n; i++)
            cin >> p[i] >> w[i];

        dp[0] = 0;

        for(int j = 1; j <= f; j++){
            for(int i = 1; i <= n; i++){
                int aux = w[i] <= j ? dp[j - w[i]] + p[i] : 1e7;

                dp[j] = min(dp[j], aux);
            }
        }

        if(dp[f] == 1e7)
            cout << "This is impossible.\n";
        else
            cout << "The minimum amount of money in the piggy-bank is " << dp[f] <<".\n";
    }

    return 0;
}