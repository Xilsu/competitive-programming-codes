/*
	Luis Henrique Morelli
	Trailing Zeros
    https://cses.fi/problemset/task/1618/
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

	ll n, zeros = 0;

	cin >> n;
	
	while(n > 1)
		zeros += n /= 5;
		
	cout << zeros << "\n";

    return 0;
}