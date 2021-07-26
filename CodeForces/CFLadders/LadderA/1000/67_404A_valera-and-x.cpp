/*
    Luis Henrique Morelli
    404A - Valera and X
    https://codeforces.com/problemset/problem/404/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;

    cin >> n;

    string square[n];
    bool flag = false;

    for(int i = 0; i < n; i++){
        cin >> square[i];

        if(square[i][i] != square[0][0] || square[i][n - i - 1] != square[0][0])
            flag = true;
        else if(!flag){
            for(int j = 0; j < n; j++){
                if(j == i || j == n - i - 1)
                    continue;
                else if(square[i][j] == square[0][0] || square[i][j] != square[0][1]){
                    flag = true;

                    break;
                }
            }                
        }      
    }

    if(flag)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}