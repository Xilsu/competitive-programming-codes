/*
    Luis Henrique Morelli
    600B - Queries about less or equal elements
    https://codeforces.com/contest/600/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;

    cin >> n >> m;

    int a[n], b[m];

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);

    for(int i = 0; i < m; i++)
        cout << upper_bound(a, a + n, b[i]) - a << " ";

    cout << "\n";
        
    return 0;
}