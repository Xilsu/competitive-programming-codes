/*
    Luis Henrique Morelli
    990A - Commentary Boxes
    https://codeforces.com/contest/990/problem/A
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n, m, a, b;

    cin >> n >> m >> a >> b;

    ll count = 0, mod = n % m;

    if(mod != 0)
        count = min(abs(mod - m) * a, mod * b);
        
    cout << count << "\n";
    
    return 0;
}