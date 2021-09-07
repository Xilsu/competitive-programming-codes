/*
    Luis Henrique Morelli
    11221 - Magic square palindromes
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2162
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

    cin >> t >> ws;

    for(int k = 1; k <= t; k++){
        string in, str;

        getline(cin, in);

        for(int i = 0; i < in.size(); i++)
            if(in[i] >= 'a' && in[i] <= 'z')
                str += in[i];

        int n = str.size(), rn = sqrt(n);

        cout << "Case #" << k << ":\n"; 

        if(rn * rn == n){
            char sq[rn][rn];
            n = 0;
            
            for(int i = 0; i < rn; i++)
                for(int j = 0; j < rn; j++)
                    sq[i][j] = str[n++];

            bool f = 1;

            n = 0;

            for(int i = 0; i < rn && f; i++){
                for(int j = 0; j < rn; j++){
                    if(sq[i][j] != str[n] || sq[j][i] != str[n]){
                        f = 0;

                        break;
                    }

                    n++;
                }
            }

            n = 0;

            for(int i = rn - 1; i >= 0 && f; i--){
                for(int j = rn - 1; j >= 0; j--){
                     if(sq[i][j] != str[n] || sq[j][i] != str[n]){
                        f = 0;

                        break;
                    }

                    n++;
                }
            }

            if(f)
                cout << rn << "\n";
            else
                cout << "No magic :(\n";
        }
        else
            cout << "No magic :(\n";
    }

    return 0;
}