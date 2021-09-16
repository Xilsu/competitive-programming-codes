/*
	Luis Henrique Morelli
	Permutations
    https://cses.fi/problemset/task/1070/
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

	int n;

	cin >> n;

	if(n == 1)
		cout << "1\n";
	else if(n >= 2 && n <= 3)
		cout << "NO SOLUTION\n";
	else{
		cout << 2;		

		for(int i = 4; i <= n; i += 2)
			cout << " " << i;

		for(int i = 1; i <= n; i += 2)
			cout << " " << i;
	
		cout << "\n";
	}

    return 0;
}