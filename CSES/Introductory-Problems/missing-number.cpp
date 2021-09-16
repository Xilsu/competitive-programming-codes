/*
	Luis Henrique Morelli
	Missing Number
	https://cses.fi/problemset/task/1083/
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

	vector<bool> arr (n + 1, 0);
	int in;

	arr[0] = 1;

	for(int i = 0; i < n - 1; i++){
		cin >> in;
		arr[in] = 1;
	}

	cout << min_element(arr.begin(), arr.end()) - arr.begin() << "\n";

    return 0;
}