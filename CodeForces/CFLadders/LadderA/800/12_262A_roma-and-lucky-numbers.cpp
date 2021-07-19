/*
    Luis Henrique Morelli
    262A - Roma and Lucky Numbers                                                              Roma and Lucky Numbers
    https://codeforces.com/contest/262/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, k, count = 0;
 
    cin >> n >> k >> ws;
 
    for(int i = 0; i < n; i++){
        string number;
 
        cin >> number >> ws;
 
        int luckyCount = 0;
        bool flag = false;
 
        for(int j = 0; j < number.size(); j++){
            if(number[j] == '4' || number[j] == '7')
                luckyCount++;
 
            if(luckyCount > k){
                flag = true;
                
                break;
            }
        }
 
        if(!flag)
            count++;
    }
 
    cout << count << "\n";
 
    return 0;
}