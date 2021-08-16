/*
    Luis Henrique Morelli
    632B - Alice, Bob, Two Teams
    https://codeforces.com/contest/632/problem/B
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

    ll pieces[n];

    for(ll i = 0; i < n; i++)
        cin >> pieces[i];

    string str;

    cin >> str;

    ll maxb = 0;

    for(ll i = 0; i < n; i++)
        if(str[i] == 'B')
            maxb += pieces[i];

    ll b = maxb, guess = b;

    for(ll i = 0; i < n; i++){
        if(str[i] == 'A'){
            guess += pieces[i];

            maxb = max(maxb, guess);
        }
        else
            guess -= pieces[i];
    }

    guess = b;

    for(ll i = n - 1; i >= 0; i--){
        if(str[i] == 'A'){
            guess += pieces[i];

            maxb = max(maxb, guess);
        }
        else
            guess -= pieces[i];        
    }

    cout << maxb << "\n";

    return 0;
}