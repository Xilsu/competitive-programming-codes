/*
    Luis Henrique Morelli
    677A - Vanya and Fence
    https://codeforces.com/contest/677/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, h;
 
    cin >> n >> h;
 
    int road = 0;
 
    for(int i = 0; i < n; i++){
        int aux;
 
        cin >> aux;
 
        if(aux > h)
            road += 2;
        else
            road++;
    }
 
    cout << road << "\n";
 
    return 0;
}