/*
	Luis Henrique Morelli
	Bit Strings
	https://cses.fi/problemset/task/1617/
*/

#include <bits/stdc++.h>
 
#define MAX 
#define MOD 1000000007
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	ll n, power = 1;

	cin >> n;

	while(n--)
		power = (power % MOD * 2 % MOD) % MOD;

	cout << power << "\n";

    return 0;
}