/*
    Luis Henrique Morelli
    1557A - Ezzat and Two Subsequences
    https://codeforces.com/contest/1557/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
 
    cin >> t;
 
    while(t--){
        int n;
 
        cin >> n;
 
        double seq[n];
 
        for(int i = 0; i < n; ++i)
            cin >> seq[i];
 
        sort(seq, seq + n);
 
        double avg2 = 0;
 
        for(int i = 0; i < n - 1; ++i)
            avg2 += seq[i];
 
        cout << fixed << setprecision(9) << seq[n - 1] + avg2 / (n - 1) << "\n";
    }
 
    return 0;
}