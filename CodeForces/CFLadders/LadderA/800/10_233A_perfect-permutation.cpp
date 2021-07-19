/*
    Luis Henrique Morelli
    233A - Perfect Permutation
    https://codeforces.com/contest/233/problem/A
*/

#include <bits/stdc++.h>

#define MAX 

using namespace std;

typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
 
    cin >> n;
 
    if(n % 2 != 0)
        cout << "-1\n";
    else{
        cout << 2 << " " << 1;
 
        for(int i = 2; i < n; i += 2)
            cout << " " << i + 2 << " " << i + 1;

        cout << "\n";
    }
 
    return 0;
}