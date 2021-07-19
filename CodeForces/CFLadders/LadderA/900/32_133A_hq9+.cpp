/*
    Luis Henrique Morelli
    133A - HQ9+
    https://codeforces.com/contest/133/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string instruction;
 
    cin >> instruction;
 
    if(instruction.find('H') != string::npos)
        cout << "YES\n";
    else if(instruction.find('Q') != string::npos)
        cout << "YES\n";
    else if(instruction.find('9') != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}