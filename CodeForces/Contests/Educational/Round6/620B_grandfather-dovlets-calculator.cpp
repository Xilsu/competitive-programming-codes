/*
    Luis Henrique Morelli
    620B - Grandfather Dovlet’s calculator
    https://codeforces.com/contest/620/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> segments = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
 
    int a, b;
 
    cin >> a >> b;
 
    string aux;
    int segCount = 0;
 
    for(int i = a; i <= b; i++){
        aux = to_string(i);
 
        for(int j = 0; j < aux.size(); j++)
            segCount += segments[aux[j] - 48];
    }
 
    cout << segCount << "\n";
       
    return 0;
}