/*
    Luis Henrique Morelli
    Distinct Numbers
    https://cses.fi/problemset/task/1621
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;

    cin >> n;

    set<ll> nums;
    ll input;

    for(ll i = 0; i < n; i++){
        cin >> input;

        nums.insert(input);
    }

    cout << nums.size() << "\n";

    return 0;
}