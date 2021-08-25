/*
    Luis Henrique Morelli
    817A - Treasure Hunt
    https://codeforces.com/contest/817/problem/A
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long l;
typedef long long ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int x1, y1, x2, y2, x, y;
    
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    
    int dx = abs(x1 - x2), dy = abs(y1 - y2);
    
    if(dx % x == 0 && dy % y == 0 && (dx / x) % 2 == (dy / y) % 2)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}