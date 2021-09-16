/*
	Luis Henrique Morelli
	1036A - Function Height
	https://codeforces.com/contest/1036/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX 
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, i> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, k;

	cin >> n >> k;

	cout << k / n + (k % n == 0 ? 0 : 1) << "\n";

    return 0;
}