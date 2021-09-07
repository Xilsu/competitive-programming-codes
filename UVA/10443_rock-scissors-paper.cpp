/*
    Luis Henrique Morelli
    10443 - Rock, Scissors, Paper
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1384
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

    map<char, char> win;

    win['P'] = 'R';
    win['R'] = 'S';
    win['S'] = 'P';

    int t;

    cin >> t;

    while(t--){
        int r, c, n;

        cin >> r >> c >> n;

        char m[r][c], m1[r][c];

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> m[i][j];
                m1[i][j] = m[i][j];
            }
        }  

        while(n--){
            for(int i = 0; i < r; i++){            
                for(int j = 0; j < c; j++){
                    if(i + 1 < r && win[m[i][j]] == m[i + 1][j])
                        m1[i + 1][j] = m[i][j];
                    
                    if(i - 1 >= 0 && win[m[i][j]] == m[i - 1][j])
                        m1[i - 1][j] = m[i][j];

                    if(j + 1 < c && win[m[i][j]] == m[i][j + 1])
                        m1[i][j + 1] = m[i][j];

                    if(j - 1 >= 0 && win[m[i][j]] == m[i][j - 1])
                        m1[i][j - 1] = m[i][j];
                }
            }

            for(int i = 0; i < r; i++)
                for(int j = 0; j < c; j++)
                        m[i][j] = m1[i][j];
        }

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++)
                cout << m[i][j];

            cout << "\n";
        }

        if(t != 0)
            cout << "\n";
    }

    return 0;
}