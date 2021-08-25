/*
    Luis Henrique Morelli
    803A - Maximal Binary Matrix
    https://codeforces.com/contest/803/problem/A
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long l;
typedef long long ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, k;
    
    cin >> n >> k;
    
    if(n * n < k)
        cout << "-1\n";
    else{
        vector<vector<int>> matrix (n, vector<int> (n));
    
        for(int i = 0; i < n && k >= 2; i++){
            for(int j = i; j < n && k >= 2; j++){
                if(i == j){
                    matrix[i][i] = 1;
                    k--;
                }
                else{
                    matrix[i][j] = 1;
                    matrix[j][i] = 1;
                    k -= 2;
                }
            }
        }
    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j && matrix[i][j] != 1 && k > 0){
                    matrix[i][j] = 1;
    
                    k--;
                }
                
                cout << matrix[i][j] << " ";
            }
    
            cout << "\n";
        }
    }
    
    return 0;
}