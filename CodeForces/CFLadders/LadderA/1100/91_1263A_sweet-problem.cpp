/*
    Luis Henrique Morelli
    1263A - Sweet Problem
    https://codeforces.com/problemset/problem/1263/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int t;

	cin >> t;

	while(t--){
		vector<int> candies (3);

		for(int i = 0; i < 3; i++)
			cin >> candies[i];

		sort(candies.begin(), candies.end());

		int rgminusb = candies[0] + candies[1];

		if(candies[2] >= rgminusb)
			cout << rgminusb << "\n";
		else
			cout << (candies[2] + rgminusb) / 2 << "\n";
	}

    return 0;
}
