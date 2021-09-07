/*
    Luis Henrique Morelli
    920A - Water The Garden
    https://codeforces.com/contest/920/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
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
        int n, k;

        cin >> n >> k;

        vi l (k);

        for(int i = 0; i < k; i++)
            cin >> l[i];

        int ans = 0;

        for(int i = 1; i <= n; i++){
            int d = 201;

            for(int j = 0; j < k; j++)
                d = min(d, abs(l[j] - i) + 1);

            ans = max(ans, d);
        }

        cout << ans << "\n";
    }

    return 0;
}