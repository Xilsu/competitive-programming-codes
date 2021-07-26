/*
    Luis Henrique Morelli
    143A - Help Vasilisa the Wise 2
    https://codeforces.com/problemset/problem/143/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int r1, r2, c1, c2, d1, d2;

    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    int ul, ur, ll, lr;

    for(int i = 1; i <= 9; i++){
        ul = i;
        ur = r1 - i;
        ll = c1 - i;
        lr = d1 - i;

        if(ul == ur || ul == ll || ul == lr || ur == ll || ur == lr || lr == ll)
            continue;
        else if((ur < 1 || ur > 9) || (ll < 1 || ll > 9) || (lr < 1 || lr > 9))
            continue;
        else if((ll + lr == r2) && (ur + lr == c2) && (ur + ll == d2)){
            cout << ul << " " << ur << "\n";
            cout << ll << " " <<lr << "\n";

            return 0;
        }
    }

    cout << "-1\n";

    return 0;
}