/*
    Luis Henrique Morelli
    302A - Eugeny and Array
    https://codeforces.com/contest/302/problem/A
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
 
    vector<int> sequence;
    int positive = 0, negative = 0;
 
    for(int i = 0; i < n; i++){
        int number;
 
        cin >> number;
 
        if(number > 0)
            positive++;
        else
            negative++;
        
        sequence.push_back(number);
    }
 
    for(int i = 0; i < m; i++){
        int l, r;
 
        cin >> l >> r;
 
        int qSize = r - l + 1;
 
        if(qSize % 2 == 0 && positive >= qSize / 2 && negative >= qSize / 2)
            cout << "1\n";
        else
            cout << "0\n";
    }
 
    return 0;
}