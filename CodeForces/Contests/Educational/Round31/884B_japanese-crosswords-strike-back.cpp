/*
    Luis Henrique Morelli
    884B - Japanese Crosswords Strike Back
    https://codeforces.com/contest/884/problem/B
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
    
    ll n, x;

    cin >> n >> x;

    ll sum = 0, a;

    for(int i = 0; i < n; i++){
        cin >> a;
        sum += a;
    }

    cout << (sum + n - 1 == x ? "YES\n" : "NO\n");    
    
    return 0;
}