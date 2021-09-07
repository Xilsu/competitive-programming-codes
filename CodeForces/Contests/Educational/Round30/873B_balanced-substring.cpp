/*
	Luis Henrique Morelli
	873B - Balanced Substring
    https://codeforces.com/contest/873/problem/B
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

    map<int, ii> sub;
	string s;
	int n;

	cin >> n >> ws >> s;

	int zeros = 0, ones = 0, length = 0;

	for(int i = 0; i < n; i++){
		s[i] == '0' ? zeros++ : ones++;

		int diff = zeros - ones;

		if(diff == 0)
			length = i + 1;

		if(!sub.count(diff))
			sub.insert({diff, {i, i}});
		else
			sub[diff].second = i; 
	}

	for(auto &it : sub)
		length = max(length, it.second.second - it.second.first);

	cout << length << "\n";

    return 0;
}