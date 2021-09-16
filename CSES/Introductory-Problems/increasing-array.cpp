/*
	Luis Henrique Morelli
    Increasing Array
    https://cses.fi/problemset/task/1094/
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

	ll n;

	cin >> n;

	vector<ll> arr (n);

	for(ll i = 0; i < n; i++)
		cin >> arr[i];

	ll moves = 0;

	for(ll i = 1; i < n; i++){
		if(arr[i] < arr[i - 1]){
			moves += abs(arr[i] - arr[i - 1]);
			arr[i] = arr[i - 1];
		}
	}
			
	cout << moves << "\n";

    return 0;
}