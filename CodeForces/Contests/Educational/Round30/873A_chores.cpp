/*
	Luis Henrique Morelli
	873A - Chores
    https://codeforces.com/contest/873/problem/A
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

    int n, k, x;

	cin >> n >> k >> x;

	int c, sum = 0;

	for(int i = 0; i < n; i++){
		cin >> c;

		if(i >= n - k)
			sum += x;
		else
			sum += c;
	}
	
	cout << sum << "\n";

    return 0;
}