/*
    Luis Henrique Morelli
    282A - Bit++
    https://codeforces.com/contest/282/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
 
    cin >> n;
 
    string command;
    int counter = 0;
 
    while(n--){
        cin >> command;
 
        if(command[0] == '+' || command[2] == '+')
            counter++;
        else
            counter--;
    }
 
    cout << counter << "\n";
 
    return 0;
}