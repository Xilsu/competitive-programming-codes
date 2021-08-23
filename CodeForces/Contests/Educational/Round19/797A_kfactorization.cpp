/*
    Luis Henrique Morelli
    797A - k-Factorization
    https://codeforces.com/contest/797/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
vector<int> factors(int n){
    vector<int> f;
 
    for(int x = 2; x * x <= n; x++){
        while(n % x == 0){
            f.push_back(x);
            n /= x;
        }
    }
 
    if (n > 1) 
        f.push_back(n);
 
    return f;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, k;
 
    cin >> n >> k;
 
    vector<int> f = factors(n);
    int fSize = f.size();
 
    if(fSize < k)
        cout << "-1\n";
    else{
        while(fSize > k){
            f[fSize - 2] *= f[fSize - 1];
            fSize--;
        }
 
        for(int i = 0; i < fSize; i++)
            cout << f[i] << " ";
    }
 
    cout << "\n";
 
    return 0;
}