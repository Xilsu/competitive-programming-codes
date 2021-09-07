/*
    Luis Henrique Morelli
    825A - Binary Protocol
	https://codeforces.com/contest/825/problem/A
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

	int digit = 0;
	char num;
	bool flag = false;

	for(int i = 0; i < n; i++){
		cin >> num;

		if(num == '0' && !flag){
			cout << digit;

			digit = 0;

			flag = true;
		}
		else if(num == '0' && flag){
			cout << 0;

			flag = false;
		}	
		else{
			digit++;

			flag = false;
		}
	}

	cout << digit << "\n";

	return 0;
}