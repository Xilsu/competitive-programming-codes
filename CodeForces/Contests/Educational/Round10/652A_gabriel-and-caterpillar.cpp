/*
    Luis Henrique Morelli
    652A - Gabriel and Caterpillar
    https://codeforces.com/contest/652/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll h1, h2, a, b;
 
    cin >> h1 >> h2 >> a >> b;
 
    h1 += 8 * a;
 
    if(h1 < h2 && a <= b)
        cout << "-1\n";
    else if(h1 >= h2)
        cout << "0\n";
    else
        cout << ceil((double) (h2 - h1) / (12 * a - 12 * b)) << "\n";
  
    return 0;
}