/*
    Luis Henrique Morelli
    263A - Beautiful Matrix
    https://codeforces.com/contest/263/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int row, col;
 
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            int number;
            
            cin >> number;
 
            if(number == 1){
                row = i;
                col = j;
            }
        }
    }
 
    cout << abs(3 - row) + abs(3 - col) << "\n";
 
    return 0;
}