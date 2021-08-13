/*
    Luis Henrique Morelli
    616B - Dinner with Emma
    https://codeforces.com/contest/616/problem/B
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
 
    int munhattan[n][m], minCost[n];
 
    for(int i = 0; i < n; i++){
        minCost[i] = INT_MAX;
 
        for(int j = 0; j < m; j++){
            cin >> munhattan[i][j];
 
            minCost[i] = min(minCost[i], munhattan[i][j]);
        }
    }
 
    int maximumCost = minCost[0];
 
    for(int i = 1; i < n; i++)
        maximumCost = max(maximumCost, minCost[i]);
 
    cout << maximumCost << "\n";
       
    return 0;
}