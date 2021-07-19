/*
    Luis Henrique Morelli
    112A - Petya and Strings
    https://codeforces.com/contest/112/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX 100
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    char a[MAX], b[MAX];
 
    cin >> a >> b;
 
    int value = stricmp(a, b);
 
    if(value > 0)
        value = 1;
    else if(value < 0)
        value = -1;
    
    cout << value << "\n";
 
    return 0;
}