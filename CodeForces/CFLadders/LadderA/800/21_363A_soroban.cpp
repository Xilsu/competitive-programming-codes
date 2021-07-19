/*
    Luis Henrique Morelli
    363A - Soroban
    https://codeforces.com/contest/363/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string n;
 
    cin >> n;
 
    for(int i = n.length() - 1; i >= 0; i--){
        int num = n[i] - 48;
 
        if(num >= 5){
            cout << "-O|";
 
            num -= 5;
        }
        else
            cout << "O-|";
 
        int remaining = 5 + num;
 
        while(num--)
            cout << "O";
        
        cout << "-";
 
        while(remaining < 9){
            cout << "O";
 
            remaining++;
        }
 
        cout << "\n";
    }
    
    return 0;
}