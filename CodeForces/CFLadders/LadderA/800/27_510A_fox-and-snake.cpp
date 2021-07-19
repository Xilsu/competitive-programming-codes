/*
    Luis Henrique Morelli
    510A - Fox And Snake
    https://codeforces.com/contest/510/problem/A
*/


#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
 
    cin >> n >> m;
 
    char matrix[n][m];
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i % 2 == 0)
                matrix[i][j] = '#';
            else
                matrix[i][j] = '.';
        }
    }
 
    for(int i = 1; i < n; i += 4){
        matrix[i][m - 1] = '#';

    for(int i = 3; i < n; i += 4)
        matrix[i][0] = '#';
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << matrix[i][j];
 
        cout << "\n";
    }
 
    return 0;
}