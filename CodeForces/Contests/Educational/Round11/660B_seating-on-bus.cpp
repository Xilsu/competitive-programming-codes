/*
    Luis Henrique Morelli
    660B - Seating On Bus
    https://codeforces.com/contest/660/problem/B
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

    int n, m;

    cin >> n >> m;

    int aux = 0;

    for(int i = 1; aux < m; i++){ 
        if(i + 2 * n  <= m){
            cout << i + 2 * n << " ";
            aux++;
        }
    
        cout << i << " ";
        aux++;
    }

    cout << "\n";

    return 0;
}