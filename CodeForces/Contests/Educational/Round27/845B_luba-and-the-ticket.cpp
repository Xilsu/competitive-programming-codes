/*
    Luis Henrique Morelli
    845B - Luba And The Ticket
    https://codeforces.com/contest/845/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
 
bool cmp(int a, int b){
	return a > b;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	
	cin >> s;

	vi t1 (3), t2 (3);
	int sum1 = 0, sum2 = 0;

	for(int i = 0; i < 6; i++){
		if(i < 3){
			t1[i] = s[i] - '0';

			sum1 += t1[i];
		}
		else{
			t2[i - 3] = s[i] - '0';

			sum2 += t2[i - 3];
		}	
	}

	if(sum1 > sum2)
		swap(t1, t2);

	sum1 = abs(sum1 - sum2);
	sum2 = 0;

	if(sum1 > 0){
		vi diff (6);

		for(int i = 0; i < 3; i++)
			diff[i] = 9 - t1[i];

		for(int i = 0; i < 3; i++)
			diff[i + 3] = t2[i];

		sort(diff.begin(), diff.end(), cmp);

		for(int i = 0; i < 6; i++){
			if(sum1 <= 0)
				break;

			sum1 -= diff[i];
			sum2++;
		}
	}

	cout << sum2 << "\n";
 
	return 0;
}