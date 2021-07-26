/*
    Luis Henrique Morelli
    1551A - Polycarp and Coins
    https://codeforces.com/contest/1551/problem/0
*/

#include <bits/stdc++.h>

#define MAX

using namespace std;

typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--){
        double n;

        cin >> n;

        double twos = round(n / 3);

        cout << fixed << setprecision(0) << n - twos * 2 << " " << twos << "\n"; 
    }
 
    return 0;
}