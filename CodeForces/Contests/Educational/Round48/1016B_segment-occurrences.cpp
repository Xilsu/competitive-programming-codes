/*
    Luis Henrique Morelli
	1016B - Segment Occurrences
	https://codeforces.com/contest/1016/problem/B
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

	int n, m, q;
	string s, t;

	cin >> n >> m >> q >> ws >> s >> t;

	int l, r;

	if(m > n){
		while(q--){
			cin >> l >> r;
			cout << "0\n";
		}
	}
	else{
		vi count (n + 1, 0);

		for(int i = 1; i <= n; i++){
			string aux = s.substr(i - 1, m);

			count[i] = count[i - 1];

			if(aux == t)
				count[i]++;
		}

		for(int i = 0; i < q; i++){
			cin >> l >> r;

			if(r - m + 1 < l)
				cout << "0\n";
			else
				cout << count[r - m + 1] - count[l - 1] << "\n";
		}
	}

	return 0;
}