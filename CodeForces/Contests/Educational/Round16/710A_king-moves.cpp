/*
    Luis Henrique Morelli
    710B - King Moves
    https://codeforces.com/contest/710/problem/A
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

    char c, r;

    cin >> c >> r;

    if((c == 'a' || c == 'h') && (r == '1' || r == '8'))
        cout << "3\n";
    else if((c == 'a' || c == 'h') || (r == '1' || r == '8'))
        cout << "5\n";
    else
        cout << "8\n";

    return 0;
}