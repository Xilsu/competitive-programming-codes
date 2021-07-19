/*
    Luis Henrique Morelli
    34A - Reconnaissance 2
    https://codeforces.com/contest/34/problem/A
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
 
    vector<int> soldiers;
 
    for(int i = 0; i < n; i++){
        int height;
 
        cin >> height;
 
        soldiers.push_back(height);
    }
 
    int lowest = abs(soldiers[n - 1] - soldiers[0]), first = n, second = 1;
 
    for(int i = 0; i < n - 1; i++){
        int diff = abs(soldiers[i] - soldiers[i + 1]);
 
        if(lowest > diff){
            lowest = diff;
            
            first = i + 1;
            second = first + 1;
        }
    }
    
    cout << first << " " << second << "\n";
 
    return 0;
}