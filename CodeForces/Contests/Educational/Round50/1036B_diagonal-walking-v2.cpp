/*
	Luis Henrique Morelli
	1036B - Diagonal Walking v.2
	https://codeforces.com/contest/1036/problem/B
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

    int q;

	cin >> q;

	while(q--){
		int x, y, k;

		cin >> x >> y >> k;

		if(x < y)
			swap(x, y);

		if(x % 2 != y % 2){
			x--;
			k--;
		}
		else if(x % 2 != k % 2){
			x--;
			k -= 2;
		}

		cout << (k >= x ? k : -1) << "\n";
	}

    return 0;
}