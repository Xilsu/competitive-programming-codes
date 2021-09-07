/*
    Luis Henrique Morelli
    845A - Chess Tourney
    https://codeforces.com/contest/845/problem/A
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
 
	int n;
 
	cin >> n;
 
	vi array (2 * n);
 
	for(int i = 0; i < 2 * n; i++)
		cin >> array[i];
 
	sort(array.begin(), array.end());

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(array[i] == array[j + n]){
				cout << "NO\n";

				return 0;
			}
		}
	}
 
	cout << "YES\n";
 
	return 0;
}