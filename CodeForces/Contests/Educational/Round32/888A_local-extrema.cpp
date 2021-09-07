/*
    Luis Henrique Morelli
    888A - Local Extrema
    https://codeforces.com/contest/888/problem/A
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
    
    int n;

    cin >> n;

    vi a (n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    ll extrema = 0;    
    
    for(int i = 1; i < n - 1; i++){
        if(a[i] > a[i - 1] && a[i] > a[i + 1])
            extrema++;
        else if(a[i] < a[i - 1] && a[i] < a[i + 1])
            extrema++;
    }

    cout << extrema << "\n";

    return 0;
}