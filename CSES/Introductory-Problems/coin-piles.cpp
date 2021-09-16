/*
	Luis Henrique Morelli
	Coin Piles
	https://cses.fi/problemset/task/1754/
*/

#include <bits/stdc++.h>
 
#define MAX 
#define MOD
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	ll t;

	cin >> t;

	while(t--){
		ll a, b;

		cin >> a >> b;

		if(a < b)
			swap(a, b);

		if(a <= 2 * b && (a + b) % 3 == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

    return 0;
}