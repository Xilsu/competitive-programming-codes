/*
    Luis Henrique Morelli
    4A - Watermelon
    https://codeforces.com/contest/4/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int w;
 
    cin >> w;
 
    if(w % 2 == 0 && w != 2)
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}