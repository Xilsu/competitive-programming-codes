/*
    Luis Henrique Morelli
    632A - Grandma Laura and Apples
    https://codeforces.com/contest/632/problem/A
*/

#include <bits/stdc++.h>

#define MAX

using namespace std;

typedef long int l;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, p;

    cin >> n >> p >> ws;

    string purchases[n];

    for(ll i = 0; i < n; i++)
        cin >> purchases[i];

    double apples = 0;
    ll halfs = 0;

    for(ll i = n - 1; i >= 0; i--){
        if(purchases[i] == "halfplus"){
            apples += 0.5;

            halfs++;
        }
        
        apples *= 2;
    }    

    cout << (ll) (apples * p - halfs * (p / 2)) << "\n";

    return 0;
}