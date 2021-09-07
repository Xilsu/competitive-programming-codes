/*
    Luis Henrique Morelli
    893B - Beautiful Divisors
    https://codeforces.com/contest/893/problem/B
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
    
    ll n;

    cin >> n;

    vector<ll> bdivs;
    ll power = 0;

    for(ll i = 1; power < n; i++){
        power = ((ll) pow(2, i) - 1) * (ll) pow(2, i - 1);
        bdivs.push_back(power);
    }

    for(ll i = bdivs.size() - 1; i >= 0; i--){
        if(n % bdivs[i] == 0){
            cout << bdivs[i] << "\n";

            break;
        }
    }

    return 0;
}