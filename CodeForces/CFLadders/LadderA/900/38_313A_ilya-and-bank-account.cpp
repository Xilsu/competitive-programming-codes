/*
    Luis Henrique Morelli
    313A - Ilya and Bank Account
    https://codeforces.com/contest/313/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int money;
 
    cin >> money;
 
    if(money < 0){
        string aux = to_string(money);
        unsigned int size = aux.size();
 
        if(aux[size - 2] > aux[size - 1])
            aux[size - 2] = aux[size - 1];
 
        aux.pop_back();
 
        money = stoi(aux);
    }
        
    cout << money << "\n";
 
    return 0;
}