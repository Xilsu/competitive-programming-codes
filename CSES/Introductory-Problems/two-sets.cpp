/*
	Luis Henrique Morelli
	Two Sets
    https://cses.fi/problemset/task/1092/
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

	if(n % 4 == 0 || n % 4 == 3){
		cout << "YES\n";
		
		vector<ll> arr1, arr2;

		for(ll i = n; i > 0; i -= 4){
			arr2.push_back(i - 1);
			arr2.push_back(i - 2);

			arr1.push_back(i);

			if(i - 3 > 0)
				arr1.push_back(i - 3);
		}

        ll sz = arr1.size();

		cout << sz << "\n" << arr1[0];

		for(ll i = 1; i < sz; i++)
			cout << " " << arr1[i];

		cout << "\n";

        sz = arr2.size();
		
        cout << sz << "\n" << arr2[0];

		for(ll i = 1; i < sz; i++)
			cout << " " << arr2[i];

		cout << "\n";
	}
	else
		cout << "NO\n";

    return 0;
}