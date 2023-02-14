/*
    Luis Henrique Morelli
    1559A - Mocha and Math
    https://codeforces.com/contest/1559/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;

	cin >> t;

	while(t--){
		int n;

		cin >> n;

		int nums[n];

		for(int i = 0; i < n; i++)
			cin >> nums[i];

		int minNum = *min_element(nums, nums + n);

		for(int i = 0; i < n; i++)
			minNum = min(minNum, minNum & nums[i]);

		cout << minNum << "\n";
	}

    return 0;
}