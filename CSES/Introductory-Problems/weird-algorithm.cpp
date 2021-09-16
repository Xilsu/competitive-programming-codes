/*
	Luis Henrique Morelli
	Weird Algorithm
	https://cses.fi/problemset/task/1068/
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

	ll n;

	cin >> n;
	cout << n;

	while(n > 1){
		if(n & 1)
			n = n * 3 + 1;
		else
			n /= 2;

		cout << " " << n;
	}

	cout << "\n";

    return 0;
}