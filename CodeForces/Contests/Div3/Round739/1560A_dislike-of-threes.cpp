/*
    Luis Henrique Morelli
    1560A - Dislike of Threes
    https://codeforces.com/contest/1560/problem/A
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
 
    int sequence[1000], count = 0;
 
    for(int i = 1; count < 1000; i++){
        string num = to_string(i);
 
        if(i % 3 != 0 && num[num.size() - 1] != '3'){
            sequence[count] = i;
            
            count++;
        }
    }
        
    int t;
 
    cin >> t;
 
    while(t--){
        int k;
 
        cin >> k;
 
        cout << sequence[k - 1] << "\n";
    }
 
    return 0;
}