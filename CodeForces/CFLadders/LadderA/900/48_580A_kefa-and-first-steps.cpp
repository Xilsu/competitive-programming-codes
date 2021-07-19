/*
    Luis Henrique Morelli
    580A - Kefa and First Steps
    https://codeforces.com/contest/580/problem/A
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
 
    int number, prev, count = 1, longest = 1;
 
    cin >> number;
 
    prev = number;
 
    for(int i = 1; i < n; i++){
        cin >> number;
        
        if(number < prev){
            longest = max(longest, count);
            
            count= 1;
        }
        else
            count++;
 
        prev = number;
    }    
 
    cout << max(longest, count) << "\n";
 
    return 0;
}