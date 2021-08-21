/*
    Luis Henrique Morelli
    702B - Powers of Two
    https://codeforces.com/contest/702/problem/B
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

    map<ll, ll> arrayCount;
    ll array[n];

    for(ll i = 0; i < n; i++){
        cin >> array[i];

        arrayCount[array[i]]++;
    }

    sort(array, array + n);

    ll count = 0;

    for(ll j = 1; j < INT_MAX; j *= 2){
        for(ll i = 0; i < n; i++){
            count += arrayCount[j - array[i]];

            if(j - array[i] == array[i])
                count--;
        }
    }

    cout << count / 2 << "\n";

    return 0;
}