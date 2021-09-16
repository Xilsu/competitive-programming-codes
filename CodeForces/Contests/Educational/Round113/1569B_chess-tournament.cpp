/*
	Luis Henrique Morelli
	1569B - Chess Tournament
	https://codeforces.com/contest/1569/problem/B
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

    int t;

	cin >> t;

	while(t--){
		string str;
		int n;

		cin >> n >> ws >> str;

		vector<vector<char>> mat (n, vector<char> (n, '#'));
		vector<bool> won (n, false);

		for(int i = 0; i < n; i++){
			mat[i][i] = 'X';

			for(int j = 0; j < n; j++){
				if(i == j || mat[i][j] != '#')
					continue;
				
				if(str[i] == '2' && str[j] == '2' && !won[i]){
					mat[i][j] = '+';
					mat[j][i] = '-';

					won[i] = true;
				}
				else if(str[i] == '2' && str[j] == '2' && won[i]){
					mat[i][j] = '-';
					mat[j][i] = '+';

					won[j] = true;
				}
				else{
					mat[i][j] = '=';
					mat[j][i] = '=';
				}
			}
		}

		bool f = true;

		for(int i = 0; i < n && f; i++){
			if(str[i] == '2' && !won[i])
				f = false;
		}

		if(!f)
			cout << "NO\n";
		else{
			cout << "YES\n";

			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					cout << mat[i][j];
				}

				cout << "\n";
			}
		}
	}

    return 0;
}