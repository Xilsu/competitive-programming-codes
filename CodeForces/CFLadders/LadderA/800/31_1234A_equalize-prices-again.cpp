/*
    Luis Henrique Morelli
    1234A - Equalize Prices Again
    https://codeforces.com/contest/1234/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX 1000
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
 
    cin >> t;
 
    while(t--){
        int n;
 
        cin >> n;
 
        vector<double> prices;
        double mean = 0;
 
        for(int i = 0; i < n; i++){
            double input;
 
            cin >> input;
 
            mean += input;
 
            prices.push_back(input);
        }
 
        mean = ceil(mean / n);
 
        cout << fixed << setprecision(0) << mean << "\n";
    }
 
    return 0;
}