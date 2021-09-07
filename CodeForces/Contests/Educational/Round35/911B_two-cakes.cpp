/*
    Luis Henrique Morelli
    911B - Two Cakes
    https://codeforces.com/contest/911/problem/B
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

    int n, a ,b;

    cin >> n >> a >> b;

    int ans = 0;

    for(int i = 1; i < n; i++)
        ans = max(ans, min(a / i, b / (n - i)));

    cout << ans << "\n";

    return 0;
}