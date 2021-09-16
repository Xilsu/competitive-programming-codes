/*
	Luis Henrique Morelli
	Repetitions
    https://cses.fi/problemset/task/1069/
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

	string str;

	cin >> str;

	char key = str[0];
	int length = 1, ans = length;

	for(unsigned int i = 1; i < str.size(); i++){
		if(str[i] == key)
			length++;
		else{
			ans = max(ans, length);
			
			key = str[i];
			length = 1;
		}
	}

	cout << max(ans, length) << "\n";

    return 0;
}