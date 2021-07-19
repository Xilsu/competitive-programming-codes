/*
    Luis Henrique Morelli
    451A - Game With Sticks
    https://codeforces.com/contest/451/problem/A
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
    
    n = min(n, m);
 
    if(n % 2 == 0)
        cout << "Malvika\n";
    else
        cout << "Akshat\n";
 
    return 0;
}