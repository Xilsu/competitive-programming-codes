/*
    Luis Henrique Morelli
    884A - Book Reading
    https://codeforces.com/contest/884/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX 86400
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n, t;

    cin >> n >> t;

    ll time, d = 0;

    for(ll i = 0; i < n && t > 0; i++){
        cin >> time;
        
        time -= MAX;
        t -= abs(time);
        d++;
    }

    cout << d << "\n";
    
    return 0;
}