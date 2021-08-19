/*
    Luis Henrique Morelli
    665B - Shopping
    https://codeforces.com/contest/665/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, m, k;
 
    cin >> n >> m >> k;
 
    int store[k];
 
    for(int i = 0; i < k; i++)
        cin >> store[i];
 
    int sum = 0;
 
    while(n--){
        for(int i = 0; i < m; i++){
            int item, j;
 
            cin >> item;
 
            for(j = 0; j < k; j++)
                if(store[j] == item)
                    break;
 
            sum += j + 1;
 
            while(j > 0){
                swap(store[j], store[j - 1]);
 
                j--;
            }
        }
    }
 
    cout << sum << "\n";
 
    return 0;
}