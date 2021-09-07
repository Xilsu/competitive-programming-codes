/*
    Luis Henrique Morelli
    837A - Text Volume
    https://codeforces.com/contest/837/problem/A
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

	int n, words = 0;
	string str;

	cin >> n;

	while(cin >> str){
		int capitals = 0;

		for(int i = 0; i < str.size(); i++)
			if(str[i] >= 'A' && str[i] <= 'Z')
				capitals++;

		words = max(words, capitals);
	}

	cout << words << "\n";

	return 0;
}