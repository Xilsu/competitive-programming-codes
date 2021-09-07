/*
    Luis Henrique Morelli
    985B - Switches and Lamps
    https://codeforces.com/contest/985/problem/B
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

    int n, m;

    cin >> n >> m;

    vector<string> mat (n);
    vi count (m, 0);
    char in;

    for(int i = 0; i < n; i++){
        cin >> mat[i];

        for(int j = 0; j < m; j++){
            if(mat[i][j] == '1')
                count[j]++;
        }
    }
        
    for(int i = 0; i < n; i++){
        bool f = true;

        for(int j = 0; j < m; j++){
            if(mat[i][j] == '1' && count[j] <= 1){
                f = false;
                
                break;
            }
        }

        if(f){
            cout << "YES\n";

            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}