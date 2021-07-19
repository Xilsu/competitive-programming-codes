/*
    Luis Henrique Morelli
    330A - Cakeminator
    https://codeforces.com/contest/330/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int r, c;
 
    cin >> r >> c;
 
    vector<string> cake (r);
 
    for(int i = 0; i < r; i++){
        cin >> cake[i];
    }
 
    int eaten = 0, countCol = 0, countRow = 0;
 
    for(int i = 0; i < r; i++){
        bool flag = false;
        
        for(int j = 0; j < c; j++)
            if(cake[i][j] == 'S'){
                flag = true;
 
                break;
            }
 
        if(!flag){
            eaten += c;
            countCol++;
        }
    }      
 
    for(int i = 0; i < c; i++){
        bool flag = false;
        
        for(int j = 0; j < r; j++)
            if(cake[j][i] == 'S'){
                flag = true;
 
                break;
            }
 
        if(!flag){
            eaten += r;
            countRow++;
        }
    } 
 
    cout << eaten - countCol * countRow << "\n";
 
    return 0;
}