/*
    Luis Henrique Morelli
    808A - Lucky Year
    https://codeforces.com/contest/808/problem/A
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long l;
typedef long long ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string year;
    
    cin >> year;
    
    int length = year.size(), aux = stoi(year), pow = 1;
    
    while(length > 1){
        pow *= 10;
    
        length--;
    }
    
    cout << pow - (aux % pow) << "\n";
    
    return 0;
}