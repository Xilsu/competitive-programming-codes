/*
    Luis Henrique Morelli
    71A - Way Too Long Words
    https://codeforces.com/contest/71/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
 
    cin >> n;
 
    while(n--){
        string str;
 
        cin >> str;
 
        int length = str.size();
 
        if(length >= 11)
            cout << str[0] << length - 2 << str[length - 1] << "\n";
        else
            cout << str << "\n";
    }
 
    return 0;
}