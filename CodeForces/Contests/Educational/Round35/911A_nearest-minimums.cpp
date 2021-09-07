/*
    Luis Henrique Morelli
    911A - Nearest Minimums
    https://codeforces.com/contest/911/problem/A
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

    vi a (n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    auto it = min_element(a.begin(), a.end());
    int minimum = *it, pos = it - a.begin(), counter = 0, ans = INT_MAX;

    for(int i = pos + 1; i < n; i++){
        counter++;

        if(a[i] == minimum){
            ans = min(ans, counter);
            counter = 0;
        }
    }

    cout << ans << "\n";

    return 0;
}