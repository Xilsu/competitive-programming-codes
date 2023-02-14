/*
    Luis Henrique Morelli
	1562B - Scenes From a Memory
	https://codeforces.com/contest/1562/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX 100
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vb;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<bool> sieve (MAX + 1, false);

	sieve[0] = true;
	sieve[1] = true;

	for(ll i = 2; i * i <= MAX; i++){
		if(sieve[i])
			continue;

		for(ll j = i * 2; j <= MAX; j += i)
			sieve[j] = true;
	}
 
	ll t;

	cin >> t;

	while(t--){
		ll k;
		string s;

		cin >> k >> ws >> s;

		bool flag = false;
		ll num;

		for(ll i = 0; i < k && !flag; i++){
			num = s[i] - '0';

			if(sieve[num]){
				cout << "1\n" << num << "\n";

				flag = true;
			}
		}
			
		for(ll i = 0; i < k && !flag; i++){
			for(ll j = i + 1; j < k; j++){
				num = (s[i] - '0') * 10 + s[j] - '0';

				if(sieve[num]){
					cout << "2\n" << num << "\n";

					flag = true;
					break;
				}
			}
		}
	}

	return 0;
}