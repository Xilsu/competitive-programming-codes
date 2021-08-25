/*
    Luis Henrique Morelli
    813A - The Contest
    https://codeforces.com/contest/813/problem/A
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long l;
typedef long long ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    
    cin >> n;
    
    int time, accumulatedTime = 0;
    
    for(int i = 0; i < n; i++){
        cin >> time;
    
        accumulatedTime += time; 
    }
    
    int m;
    
    cin >> m;
    
    int on, off;
    
    for(int i = 0; i < m; i++){
        cin >> on >> off;
    
        if((accumulatedTime >= on && accumulatedTime <= off)){
            cout << accumulatedTime << "\n";
    
            return 0;
        }
        else if(on > accumulatedTime){
            cout << on << "\n";
    
            return 0;
        }
    }
        
    cout << "-1\n";
    
    return 0;
}