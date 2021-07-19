/*
    Luis Henrique Morelli
    136A - Presents
    https://codeforces.com/contest/136/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
 
    cin >> n;
 
    vector<int> givenGifts (n + 1);
 
    for(int i = 1; i <= n; i++){
        int aux;
 
        cin >> aux;
        
        givenGifts[aux] = i;
    }
 
    cout << givenGifts[1];
 
    for(int i = 2; i <= n; i++)
        cout << " " << givenGifts[i] ;
 
    cout << "\n";
 
    return 0;
}