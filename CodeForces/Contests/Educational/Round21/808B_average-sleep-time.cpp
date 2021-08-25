/*
    Luis Henrique Morelli
    808B - Average Sleep Time
    https://codeforces.com/contest/808/problem/B
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long l;
typedef long long ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n, k;
    
    cin >> n >> k;
    
    vector<ll> schedule (n);
    vector<double> sums (n);
    double sum = 0;
    
    for(ll i = 0; i < n; i++){
        cin >> schedule[i];
    
        sum += schedule[i];
        sums[i] = sum;
    }
    
    sum = 0;
    
    for(ll i = n - 1; i >= k - 1; i--)
        sum += sums[i] - sums[i - k];
    
    cout << fixed << setprecision(10) << sum / (n - k + 1) << "\n";
    
    return 0;
}