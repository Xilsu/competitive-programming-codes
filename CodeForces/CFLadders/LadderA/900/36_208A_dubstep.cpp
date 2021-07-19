/*
    Luis Henrique Morelli
    208A - Dubstep
    https://codeforces.com/contest/208/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string remix;
 
    cin >> remix;
 
    unsigned int n = remix.size();
    bool first = false, space = false;
 
    for(unsigned int i = 0; i < n; i++){
        if(i + 2 < n && remix[i] == 'W' && remix[i + 1] == 'U' && remix[i + 2] == 'B'){
            i += 2; 
            
            if(first)
                space = true;
        }
        else{
            if(space){
                cout << " ";
 
                space = false;
            }
 
            cout << remix[i];
 
            first = true;
        }  
    }
 
    return 0;
}