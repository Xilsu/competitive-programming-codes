/*
    Luis Henrique Morelli
    678A - Johny Likes Numbers
    https://codeforces.com/contest/678/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, k;
 
    cin >> n >> k;
 
    n += k - n % k;
 
    cout << n << "\n";
 
    return 0;
}