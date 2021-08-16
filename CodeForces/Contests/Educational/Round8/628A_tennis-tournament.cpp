/*
    Luis Henrique Morelli
    628A - Tennis Tournament
    https://codeforces.com/contest/628/problem/A
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

    int n, b, p;

    cin >> n >> b >> p;

    int bottles = 0, towels = n * p, k = 2;

    while(k * 2 <= n)
        k *= 2;

    while(n > 1){
        bottles += (k / 2)* (2 * b + 1);
        
        n -= k / 2;

        while(k > n)
            k /= 2;
    }

    cout << bottles << " " << towels << "\n";

    return 0;
}