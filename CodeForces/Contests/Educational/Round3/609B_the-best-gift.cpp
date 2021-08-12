/*
    Luis Henrique Morelli
    609B - The Best Gift
    https://codeforces.com/contest/609/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, m;

    cin >> n >> m;

    ll genres[m + 1], input;

    memset(genres, 0, sizeof(genres));

    for(ll i = 0; i < n; i++){
        cin >> input;

        genres[input]++;
    }

    ll sameGenre = 0;

    for(ll i = 1; i <= m; i++)
        sameGenre += genres[i] * (genres[i] - 1) / 2;

    cout << n * (n - 1) / 2 - sameGenre << "\n";
        
    return 0;
}