/*
    Luis Henrique Morelli
    803B - Distances to Zero
    https://codeforces.com/contest/803/problem/B
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
    
    vector<int> index;
    int aux;
    
    for(int i = 0; i < n; i++){
        cin >> aux;
    
        if(aux == 0)
            index.push_back(i);
    }
    
    int length = index.size() - 1;
    
    aux = 0;
    
    while(aux < index[0]){
        cout << index[0] - aux << " ";
    
        aux++;
    }
    
    for(int i = index[0]; i < index[length]; i++){
        int pos = upper_bound(index.begin(), index.end(), i) - index.begin();
    
        cout << min(index[pos] - i, i - index[pos - 1]) << " ";
    }
    
    aux = index[length];
    
    while(aux < n){
        cout << aux - index[length] << " ";
    
        aux++;
    }
    
    return 0;
}