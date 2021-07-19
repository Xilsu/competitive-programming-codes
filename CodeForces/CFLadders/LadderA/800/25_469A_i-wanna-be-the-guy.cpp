/*
    Luis Henrique Morelli
    469A - I Wanna Be the Guy
    https://codeforces.com/contest/469/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, p;
 
    cin >> n >> p;
 
    set<int> levels;
    int aux;
 
    for(int i = 0; i < p; i++){
        cin >> aux;
        
        levels.insert(aux);
    }
 
    int q;
 
    cin >> q;
 
    for(int i = 0; i < q; i++){
        cin >> aux;
        
        levels.insert(aux);
    }
 
    if(levels.size() == n)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";
 
    return 0;
}