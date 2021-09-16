/*
	Luis Henrique Morelli
	1027B - Numbers on the Chessboard
	https://codeforces.com/contest/1027/problem/B
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

    ll n, q;

	cin >> n >> q;

	for(ll i = 0; i < q; i++){
		ll r, c;

		cin >> r >> c;

		ll ans = (r - 1) * n + c + 1;

		if((r + c) % 2 == 0)
			cout << ans / 2 << "\n";
		else
			cout << ans / 2 + (n * n + 1) / 2 << "\n";
	}

    return 0;
}