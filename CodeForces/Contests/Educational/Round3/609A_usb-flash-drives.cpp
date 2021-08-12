/*
    Luis Henrique Morelli
    609A - USB Flash Drives
    https://codeforces.com/contest/609/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;

    cin >> n >> m;

    int drives[n];

    for(int i = 0; i < n; i++)
        cin >> drives[i];

    sort(drives, drives + n);

    int i = n, sum = 0;

    while(sum < m && i >= 0){
        i--;
        
        sum += drives[i];
    }

    cout << n - i << "\n";
        
    return 0;
}