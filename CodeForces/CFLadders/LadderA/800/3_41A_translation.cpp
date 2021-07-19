/*
    Luis Henrique Morelli
    41A - Translation
    https://codeforces.com/contest/41/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string berland, birland;
 
    cin >> berland >> birland;
 
    reverse(berland.begin(), berland.end());
 
    if(berland == birland)
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}