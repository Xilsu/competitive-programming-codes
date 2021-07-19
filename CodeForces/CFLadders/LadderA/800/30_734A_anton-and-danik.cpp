/*
    Luis Henrique Morelli
    734A - Anton and Danik
    https://codeforces.com/contest/734/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    string games;
 
    cin >> n >> games;
 
    sort(games.begin(), games.end());
 
    int a = 0;
 
    while(games[a] == 'A')
        a++;
 
    n = n - a;
 
    if(a == n)
        cout << "Friendship\n";
    else if(a > n)
        cout << "Anton\n";
    else
        cout << "Danik\n";
 
    return 0;
}