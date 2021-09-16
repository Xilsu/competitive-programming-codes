/*
    Luis Henrique Morelli
	1027A - Palindromic Twist
	https://codeforces.com/contest/1027/problem/A
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

		bool f = true;

		for(int i = 0; i < n / 2 && f; i++){
			if(str[i] + 1 != str[n - i - 1] + 1 && str[i] + 1 != str[n - i - 1] - 1 &&
				str[i] - 1 != str[n - i - 1] + 1 && str[i] - 1 != str[n - i - 1] - 1)
				f = false;
		}

		cout << (f ? "YES\n" : "NO\n");
	}

	return 0;
}