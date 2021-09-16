/*
    Luis Henrique Morelli
	1016A - Death Note
	https://codeforces.com/contest/1016/problem/A
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

	int n, m;

	cin >> n >> m;

	vi names (n);
	ll page = 0;

	for(int i = 0; i < n; i++){
		cin >> names[i];
		page += names[i];

		cout << page / m << " ";

		page %= m;
	}

	cout << "\n";

	return 0;
}