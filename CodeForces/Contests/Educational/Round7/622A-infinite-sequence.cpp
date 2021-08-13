/*
    Luis Henrique Morelli
    622A - Infinite Sequence
    https://codeforces.com/contest/622/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;
 
    cin >> n;
 
    ll aux = 0, i = 1;
 
    while(aux < n){
        aux += i;
        i++;
    }
      
    cout << abs(aux - n - i) - 1 << "\n";
       
    return 0;
}