/*
    Luis Henrique Morelli
    378A - Playing with Dice
    https://codeforces.com/contest/378/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int a, b;
 
    cin >> a >> b;
 
    int aCount = 0, bCount = 0, draw = 0;
 
    for(int i = 1; i <= 6; i++){
        int diffA = abs(a - i), diffB = abs(b - i);
 
        if(diffA == diffB){
            draw++;
        }
        else if(diffA < diffB){
            aCount++;
        }
        else{
            bCount++;
        }
    }
 
    cout << aCount << " " << draw << " " << bCount << "\n";
    
    return 0;
}