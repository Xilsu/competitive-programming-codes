#include <bits/stdc++.h>

#define MAX
#define MOD

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vi> mat(n, vi(m));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cin >> mat[i][j];
        }

        ll beauty = 0;
        map<int, ll> mp;

        for(int j = 0; j < m; j++)
            mp[mat[0][j]]++;

        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mp[mat[i][j]]){
                    beauty++;
                    mp[mat[i][j]]--;
                }
            }

            mp.clear();

            for(int j = 0; j < m; j++)
                mp[mat[i][j]]++;
        }

        cout << beauty << "\n";
    }

    return 0;
}
