/*
	Luis Henrique Morelli
	863B - Kayaking
	https://codeforces.com/contest/863/problem/B
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

    int n;

	cin >> n;

	n *= 2;

	vi w (n);

	for(int i = 0; i < n; i++)
		cin >> w[i];

	sort(w.begin(), w.end());

	int sum = INT_MAX;

	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int a, b, aux;

			a = b = aux = 0;

			for(int k = 0; k < n; k++){
				if(k == i || k == j)
					continue;
				
				if(a == 0)
					a = w[k];
				else if(b == 0){
					b = w[k];
			
					aux += b - a;

					a = 0;
					b = 0;
				}
			}

			sum = min(sum, aux);
		}
	}

	cout << sum << "\n";

    return 0;
}