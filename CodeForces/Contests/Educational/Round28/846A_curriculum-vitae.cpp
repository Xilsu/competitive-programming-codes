/*
    Luis Henrique Morelli
    846A - Curriculum Vitae
    https://codeforces.com/contest/846/problem/A
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

	vi games (n);
	int ones = 0;

	for(int i = 0; i < n; i++){
		cin >> games[i];

		if(games[i] == 1)
			ones++;
	}

	int maximum = ones, zeros = 0;

	for(int i = 0; i < n; i++){
		if(games[i] == 0){
			zeros++;

			int count = zeros;

			for(int j = i + 1; j < n; j++)
				if(games[j] == 1)
					count++;

			maximum = max(maximum, count);
		}
	}

	cout << maximum << "\n";
 
	return 0;
}