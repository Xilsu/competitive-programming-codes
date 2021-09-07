/*
    Luis Henrique Morelli
    837B - Flag of Berland
    https://codeforces.com/contest/837/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int n, m;

bool verticalStripes(vector<string> &mat){
    set<char> colors;
    int step = m / 3;
    bool flag = true;
    
    for(int i = 0; i < m; i += step){
        char cur = mat[0][i];
        
        colors.insert(cur);

        for(int j = i; j < i + step && flag; j++){
            for(int k = 0; k < n; k++){
                if(mat[k][j] != cur){
                    flag = false;

                    break;
                }
            }
        }

        if(!flag)
            break;    
    }

	bool rgb = colors.size() == 3 ? true : false;

    return rgb && flag;
}

bool horizontalStripes(vector<string> &mat){
    set<char> colors;
    int step = n / 3;
    bool flag = true;

    for(int i = 0; i < n; i += step){
        char cur = mat[i][0];
        
        colors.insert(cur);

        for(int j = i; j < i + step && flag; j++){
            for(int k = 0; k < m; k++){
                if(mat[j][k] != cur){
                    flag = false;

                    break;
                }
            }
        }

        if(!flag)
            break;
    }

	bool rgb = colors.size() == 3 ? true : false;

    return rgb && flag;
}

bool solve(vector<string> &mat){
    bool flag = false;
    
    if(n % 3 == 0)
        flag = horizontalStripes(mat);
    
    if(m % 3 == 0 && !flag)
        flag = verticalStripes(mat);

    return flag;    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    vector<string> mat (n);
    
    for(int i = 0; i < n; i++)
        cin >> mat[i];

    if(solve(mat))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}