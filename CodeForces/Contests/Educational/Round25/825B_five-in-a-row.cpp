/*
    Luis Henrique Morelli
    825B - Five-In-a-Row
    https://codeforces.com/contest/825/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX 10
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool solve(vector<string> &m, int i, int j){
	int x = 0, dot = 0;
	
	for(int k = j; k < MAX && x < 5; k++){
		if(m[i][k] == 'X')
			x++;
		else if(dot == 0 && m[i][k] == '.'){
			x++;
			dot++;
		}
		else
			break;	
	}

	if(x == 5 && dot == 1)
		return true;

	x = 0;
	dot = 0;

	for(int k = i; k < MAX && x < 5; k++){
		if(m[k][j] == 'X')
			x++;
		else if(dot == 0 && m[k][j] == '.'){
			x++;
			dot++;
		}
		else
			break;	
	}

	if(x == 5 && dot == 1)
		return true;

	int aux = i;

	x = 0;
	dot = 0;

	for(int k = j; k < MAX &&  aux < MAX && x < 5; k++){
		if(m[aux][k] == 'X')
			x++;
		else if(dot == 0 && m[aux][k] == '.'){
			x++;
			dot++;
		}
		else
			break;

		aux++;	
	}

	if(x == 5 && dot == 1)
		return true;

	aux = j;
	x = 0;
	dot = 0;

	for(int k = i; k < MAX && aux >= 0 && x < 5; k++){
		if(m[k][aux] == 'X')
			x++;
		else if(dot == 0 && m[k][aux] == '.'){
			x++;
			dot++;
		}
		else
			break;	

		aux--;
	}

	if(x == 5 && dot == 1)
		return true;

	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<string> m (MAX);

	for(int i = 0; i < MAX; i++)
		cin >> m[i];

	for(int i = 0; i < MAX; i++){
		for(int j = 0; j < MAX; j++){
			if(solve(m, i, j)){
				cout << "YES\n";

				return 0;
			}
		}
	}
		
	cout << "NO" << "\n";

	return 0;
}