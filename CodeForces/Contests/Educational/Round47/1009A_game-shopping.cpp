/*
    Luis Henrique Morelli
	1009A - Game Shopping
	https://codeforces.com/contest/1009/problem/A
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

	vi g (n), b (m);

	for(int i = 0; i < n; i++)
		cin >> g[i];

	for(int i = 0; i < m; i++)
		cin >> b[i];

	int bought = 0;

	for(int i = 0; i < n && bought < m; i++)
		if(b[bought] >= g[i])
			bought++;

	cout << bought << "\n";

	return 0;
}