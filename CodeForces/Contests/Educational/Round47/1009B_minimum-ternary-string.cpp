/*
    Luis Henrique Morelli
	1009B - Minimum Ternary String
	https://codeforces.com/contest/1009/problem/B
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

	string str;
	int ones = 0;

	cin >> str;

	string aux;
    int n = str.size();

	for(int i = 0; i < n; i++){
		if(str[i] == '1')
			ones++;
		else
			aux += str[i];
	}

	str = "";

	for(unsigned int i = 0; i < aux.size(); i++){
		if(aux[i] == '2'){
			while(ones > 0){
				str += '1';

				ones--;
			}
		}

		str += aux[i];
	}

	while(ones > 0){
		str += '1';

		ones--;
	}

	cout << str << "\n";

	return 0;
}