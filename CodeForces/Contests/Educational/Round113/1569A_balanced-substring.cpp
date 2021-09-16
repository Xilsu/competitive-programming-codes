/*
	Luis Henrique Morelli
	1569A - Balanced Substring
	https://codeforces.com/contest/1569/problem/A
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

    int t;

	cin >> t;

	while(t--){
		string str;
		int n;

		cin >> n >> ws >> str;

		int l = -1, r = -1;
		bool f = false;

		for(int i = 1; i <= n && !f; i++){
			int a = 0, b = 0;
			
			str[i - 1] == 'a' ? a++ : b++;

			for(int j = i + 1; j <= n; j++){
				str[j - 1] == 'a' ? a++ : b++;

				if(a == b){
					l = i;
					r = j;
					f = true;

					break;
				}
			}
		}

		cout << l << " " << r << "\n";
	}

    return 0;
}