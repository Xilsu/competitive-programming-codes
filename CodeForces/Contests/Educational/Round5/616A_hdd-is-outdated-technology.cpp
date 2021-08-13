/*
    Luis Henrique Morelli
    616A - Comparing Two Long Integers
    https://codeforces.com/contest/616/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string a, b;
 
    getline(cin, a);
    getline(cin, b); 
 
    int lengthA = a.length();
    int lengthB = b.length();
 
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
 
    while(lengthA < lengthB){
        a += '0';
 
        lengthA++;
    }
 
    while(lengthB < lengthA){
        b += '0';
 
        lengthB++;
    }
 
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
 
    if(a == b)
        cout << "=\n";
    else if(a > b)
        cout << ">\n";
    else
        cout << "<\n";
       
    return 0;
}