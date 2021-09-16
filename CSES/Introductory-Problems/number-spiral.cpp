/*
	Luis Henrique Morelli
	Number Spiral
	https://cses.fi/problemset/task/1071/
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
		ll r, c;

		cin >> r >> c;

		if(r > c){
			if(r & 1)
				cout << (r - 1) * (r - 1) + c << "\n";
			else
				cout << r * r - c + 1 << "\n";
		}
		else{
			if(c & 1)
				cout << c * c - r + 1 << "\n";
			else
				cout << (c - 1) * (c - 1) + r  << "\n";
		}
	}

    return 0;
}