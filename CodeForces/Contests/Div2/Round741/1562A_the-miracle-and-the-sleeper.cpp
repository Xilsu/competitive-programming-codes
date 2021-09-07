/*
    Luis Henrique Morelli
    1562A - The Miracle and the Sleeper
    https://codeforces.com/contest/1562/problem/A
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

	ll t;

	cin >> t;

	while(t--){
		ll l, r;

		cin >> l >> r;

		ll aux = r / 2;

		if(aux < l)
			cout << r % l << "\n";
		else
			cout << r % (aux + 1) << "\n";
	}

	return 0;
}