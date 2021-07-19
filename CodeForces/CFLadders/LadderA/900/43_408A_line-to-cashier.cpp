/*
    Luis Henrique Morelli
    408A - Line to Cashier
    https://codeforces.com/contest/408/problem/A
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
 
    vector<int> numPeople (n);
 
    for(int i = 0; i < n; i++)
        cin >> numPeople[i];
 
    int input, minTime = INT_MAX;
 
    for(int i = 0; i < n; i++){
        int numProd = 0;
 
        for(int j = 0; j < numPeople[i]; j++){
            cin >> input;
 
            numProd += input * 5 + 15;        
        }   
 
        minTime = min(minTime, numProd);
    }
 
    cout << minTime << "\n";
 
    return 0;
}