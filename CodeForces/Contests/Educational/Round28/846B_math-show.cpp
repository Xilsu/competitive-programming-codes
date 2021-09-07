/*
    Luis Henrique Morelli
    846B - Math Show
	https://codeforces.com/contest/846/problem/B
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
 
	ll n, k, m;

	cin >> n >> k >> m;

	vector<ll> subtasks (k);
	ll timeSum = 0;

	for(ll i = 0; i < k; i++){
		cin >> subtasks[i];

		timeSum += subtasks[i];
	}

	sort(subtasks.begin(), subtasks.end());

	ll points = 0;

	for(ll i = 0; i <= n; i++){
		ll spent = timeSum * i;

		if(spent > m)
			break;

		ll auxPoints = i * k + i;
		ll left = m - spent;

		for(ll j = 0; j < k; j++){
			for(ll u = i + 1; u <= n && left > 0; u++){
				if(subtasks[j] <= left){
					left -= subtasks[j];
					auxPoints++;
				}
				else
					break;
			}
		}

		points = max(points, auxPoints);
	}
 
	cout << points << "\n";

	return 0;
}