/*
    Luis Henrique Morelli
    58A - Chat Room
    https://codeforces.com/contest/58/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
 
    cin >> s;
 
    string hello = "hello";
    unsigned int letter = 0;
 
    for(unsigned int i = 0; i < s.size(); i++)
        if(s[i] == hello[letter])
            letter++;
    
    if(letter == hello.size())
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}