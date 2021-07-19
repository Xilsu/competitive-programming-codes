/*
    Luis Henrique Morelli
    160A - Twins
    https://codeforces.com/contest/160/problem/A
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
 
    vector<int> coins (n);
    int i;
 
    for(i = 0; i < n; i++){
        cin >> coins[i];
    }
 
    sort(coins.begin(), coins.end());
 
    n--;
    i = 0;
 
    int sum = coins[n], auxSum = 0, count = 1;
 
    while(i < n){
        auxSum += coins[i];
 
        if(auxSum >= sum){
            n--;
            sum += coins[n];
 
            count++;
        }
 
        i++;
    }
 
    cout << count << "\n";
 
    return 0;
}