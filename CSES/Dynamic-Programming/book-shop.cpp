/*
    Luis Henrique Morelli
    Book Shop
    https://cses.fi/problemset/task/1158/
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
 
    int n, x;
 
    cin >> n >> x;
 
    vector<int> b (n + 1), p (n + 1), dp (x + 1);
 
    for(int i = 1; i <= n; i++)
        cin >> b[i];
 
    for(int i = 1; i <= n; i++)
        cin >> p[i];
 
    for(int i = 1; i <= n; i++)
        for(int j = x; j >= b[i]; j--)
            dp[j] = max(dp[j], dp[j - b[i]] + p[i]);
 
    cout << *max_element(dp.begin(), dp.end()) << "\n";
 
    return 0;
}