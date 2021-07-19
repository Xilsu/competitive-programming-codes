/*
    Luis Henrique Morelli
    144A - Arrival of the General
    https://codeforces.com/contest/144/problem/A
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
 
    int soldier, min, max, minIndex, maxIndex;
 
    cin >> soldier;
 
    min = max = soldier;
    minIndex = maxIndex = 0;
 
    for(int i = 1; i < n; i++){
        int soldier;
 
        cin >> soldier;
        
        if(soldier > max){
            max = soldier;
            maxIndex = i;
        }
        else if(soldier <= min){
            min = soldier;
            minIndex = i;
        }
    }
 
    if(minIndex < maxIndex)
        minIndex++;
 
    cout << maxIndex + (n - minIndex - 1) << "\n";
 
    return 0;
}