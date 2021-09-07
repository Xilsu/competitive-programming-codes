/*
    Luis Henrique Morelli
    990B - Micro-World
    https://codeforces.com/contest/990/problem/B
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
    
    ll n, k;

    cin >> n >> k;

    vi a (n);

    for(ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    ll count = 0;

    for(ll i = 0; i < n; i++){
        auto it = lower_bound(a.begin(), a.end(), a[i] + 1);

        if(it != a.end() && *it > a[i] && *it <= a[i] + k)
            count++;
    }
    
    cout << n - count << "\n";
    
    return 0;
}