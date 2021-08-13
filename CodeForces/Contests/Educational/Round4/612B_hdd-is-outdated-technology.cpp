/*
    Luis Henrique Morelli
    612B - HDD is Outdated Technology
    https://codeforces.com/contest/612/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
 
    cin >> n;
 
    vector<ll> sectors (n + 1);
    ll fragment;
 
    for(ll i = 1; i <= n; i++){
        cin >> fragment;
 
        sectors[fragment] = i;
    }
 
    ll time = 0;
 
    for(ll i = 2; i <= n; i++)
        time += abs(sectors[i] - sectors[i - 1]);
 
    cout << time << "\n";
 
    return 0;
}