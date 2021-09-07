/*
    Luis Henrique Morelli
    938B - Run For Your Prize
    https://codeforces.com/contest/938/problem/B
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

    vi pos (n);

    for(int i = 0; i < n; i++)
        cin >> pos[i];

    sort(pos.begin(), pos.end());

    vi sec (n);

    for(int i = 0; i < n; i++)
        sec[i] = min(abs(1 - pos[i]), abs(1000000 - pos[i]));

    cout << *max_element(sec.begin(), sec.end()) << "\n";

    return 0;
}