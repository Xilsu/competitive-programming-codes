/*
    Luis Henrique Morelli
    501A - Contest
    https://codeforces.com/contest/501/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int a, b, c, d;
 
    cin >> a >> b >> c >> d;
 
    a = max((3 * a / 10), (a - a / 250 * c));
    b = max((3 * b / 10), (b - b / 250 * d));
 
    if(a == b)
        cout << "Tie\n";
    else if(a > b)
        cout << "Misha\n";
    else
        cout << "Vasya\n";
 
    return 0;
}