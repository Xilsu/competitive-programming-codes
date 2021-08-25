/*
    Luis Henrique Morelli
    818A - Diplomas and Certificates
    https://codeforces.com/contest/818/problem/A
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long long ll;
typedef vector<ll> v;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n, k;
    
    cin >> n >> k;
    
    ll c = (n / 2) / (k + 1), w = c + c * k;
    
    cout << c << " " << w - c << " " << n - w << "\n";
    
    return 0;
}