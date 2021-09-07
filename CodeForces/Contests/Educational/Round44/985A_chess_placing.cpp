/*
    Luis Henrique Morelli
    985A - Chess Placing
    https://codeforces.com/contest/985/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    n /= 2;

    vi pos (n);

    for(int i = 0; i < n; i++)
        cin >> pos[i];

    sort(pos.begin(), pos.end());

    int aux = 1, mov1 = 0;

    for(int i = 0; i < n; i++, aux += 2)
        mov1 += abs(aux - pos[i]);

    int mov2 = 0;

    aux = 2;

    for(int i = 0; i < n; i++, aux += 2)
        mov2 += abs(aux - pos[i]);  
        
    cout << min(mov1, mov2) << "\n";

    return 0;
}