/*
    Luis Henrique Morelli
    459A - Pashmak and Garden
    https://codeforces.com/contest/459/problem/A
*/

#include <bits/stdc++.h>

#define MAX

using namespace std;

typedef long int l;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
        cout << "-1\n";
    else if(x1 == x2)
        cout << x1 + abs(y1 - y2) << " " << y2 << " " << x1 + abs(y1 - y2) << " " << y1 << "\n";
    else if(y1 == y2)
        cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y1 + abs(x1 - x2) << "\n";
    else
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";

    return 0;
}