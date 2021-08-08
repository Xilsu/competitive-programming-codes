/*
    Luis Henrique Morelli
    682A - Alyona and Numbers
    https://codeforces.com/problemset/problem/682/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	ll n, m;

	cin >> n >> m;

    vector<ll> mod (5, 0);

	for(ll i = 1; i <= n; i++)
        mod[i % 5]++;

    ll sum = 0;

    for(ll i = 1; i <= m; i++){
        sum += mod[(5 - i % 5) % 5];
    }
        
	cout << sum << "\n";

    return 0;
}