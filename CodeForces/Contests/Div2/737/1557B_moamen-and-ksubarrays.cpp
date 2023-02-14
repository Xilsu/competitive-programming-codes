/*
    Luis Henrique Morelli
    1557B - Moamen and k-subarrays
    https://codeforces.com/contest/1557/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--){
        int n, k;

        cin >> n >> k;

        pair<int, int> seq[n];

        for(int i = 0; i < n; ++i){
            cin >> seq[i].first;
            seq[i].second = i;
        }
            
        sort(seq, seq + n);

        int splits = 1;

        for(int i = 1; i < n; ++i)
            if(seq[i - 1].second + 1 != seq[i].second)
                ++splits;

        if(splits <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}