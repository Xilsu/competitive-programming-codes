#include <bits/stdc++.h>
 
#define MAX 100000
#define K 25
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> range (MAX + 1);

    range[1] = 0;

    for(int i = 2; i <= MAX; i++){
        range[i] = range[i / 2] + 1;
    }
 
    int n;

    cin >> n;

    vector<vector<int>> st (MAX, vector<int> (K + 1));

    for(int i = 0; i < n; i++){
        cin >> st[i][0];
    }

    for(int j = 1; j <= K; j++){
        for(int i = 0; i + (1 << j) <= n; i++){
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]); 
        }
    }

    int q;

    cin >> q;

    for(int i = 0; i < q; i++){
        int l, r;

        cin >> l >> r;

        int j;
        
        j = range[r - l + 1];

        cout << min(st[l][j], st[r - (1 << j) + 1][j]) << "\n";
    }

    return 0;
}