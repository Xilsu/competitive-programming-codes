#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, h, w;
    cin >> n >> m >> h >> w;
    
    vector<vi> mat(n + 1, vi(m + 1));
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            cin >> mat[i][j];
    }

    int l = 1, r = n * m, mi = 1e7;
    
    while(l <= r){
        int mid = (l + r) >> 1;
        bool f = false;
        vector<vi> prefix(n + 1, vi(m + 1));
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
            
                if(mat[i][j] > mid)
                    prefix[i][j]++;
                else
                    prefix[i][j]--;
            }
        }
        
        for(int i = h; i <= n && !f; i++){
            for(int j = w; j <= m && !f; j++){
                int sum = prefix[i][j] + prefix[i - h][j - w] - prefix[i - h][j] - prefix[i][j - w];
            
                if(sum <= 0)
                    f = true;
            }
        }
        
        if(f){
            mi = min(mi, mid);
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    cout << mi << "\n";

    return 0;
}