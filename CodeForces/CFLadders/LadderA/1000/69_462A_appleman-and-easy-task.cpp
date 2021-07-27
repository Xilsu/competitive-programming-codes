/*
    Luis Henrique Morelli
    462A - Appleman and Easy Task
    https://codeforces.com/contest/462/problem/A
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
 
    char square[n][n];
 
    for(int i = 0;i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> square[i][j];
 
    int adjacent = 0;
 
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++){
            if(i - 1 >= 0 && square[i - 1][j] == 'o')
                adjacent++;

            if(j - 1 >= 0 && square[i][j - 1] == 'o')
                adjacent++;

            if(i + 1 < n && square[i + 1][j] == 'o')
                adjacent++;

            if(j + 1 < n && square[i][j + 1] == 'o')
                adjacent++;

            if(adjacent % 2 != 0){
                cout << "NO\n";

                return 0;
            }
        }
    }   

    cout << "YES\n";
        
    return 0;
}