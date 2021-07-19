/*
    Luis Henrique Morelli
    152A - Marks
    https://codeforces.com/contest/152/problem/A
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
 
    vector<vector<int>> gradebook (n, vector<int> (m));
    vector<int> best (m, 0);
    char input;
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> input;
            gradebook[i][j] = input - 48;
 
            best[j] = max(best[j], gradebook[i][j]);
        }
    }
 
    int count = 0;
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(gradebook[i][j] == best[j]){
                count++;
 
                break;
            }  
        }
    }
 
    cout << count << "\n";
 
    return 0;
}