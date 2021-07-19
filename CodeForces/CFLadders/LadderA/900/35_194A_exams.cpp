/*
    Luis Henrique Morelli
    194A - Exams
    https://codeforces.com/contest/194/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, k;
 
    cin >> n >> k;
 
    if(3 * n < k)
        cout << "0\n";
    else
        cout << 3 * n - k << "\n";
 
    return 0;
}