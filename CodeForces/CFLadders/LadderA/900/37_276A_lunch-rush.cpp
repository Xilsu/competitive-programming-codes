/*
    Luis Henrique Morelli
    276A - Lunch Rush
    https://codeforces.com/contest/276/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, k;
 
    cin >> n >> k;
 
    ll maxJoy = LONG_LONG_MIN, f, t;
 
    for(int i = 0; i < n; i++){
        cin >> f >> t;
 
        if(t > k)
            maxJoy = max(maxJoy, f - (t - k));
        else
            maxJoy = max(maxJoy, f);
    }
 
    cout << maxJoy << "\n";
 
    return 0;
}