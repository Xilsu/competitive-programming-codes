/*
    Luis Henrique Morelli
    691A - Fashion in Berland
    https://codeforces.com/contest/691/problem/A
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
 
    int n;

    cin >> n;

    int input, zeros = 0;

    for(int i = 0; i < n; i++){
        cin >> input;

        if(input == 0)
            zeros++;
    }

    if(n == 1 && zeros == 0)
        cout << "YES\n";
    else if(n > 1 && zeros == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}