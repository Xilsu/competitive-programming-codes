/*
    Luis Henrique Morelli
    432A - Choosing Teams
    https://codeforces.com/contest/432/problem/A
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
 
    int participants[n + 1];
 
    for(int i = 0; i < n; i++)
        cin >> participants[i];
 
    sort(participants, participants + n);
 
    int teams = 0;
 
    for(int i = 0; i < n; i += 3){
        int members = 0;
        bool flag = 0;
        
        for(int j = 0; j < 3 && i + j < n; j++){
            members++;
 
            if(abs(5 - participants[i + j]) < k){
                flag = true;
 
                break;
            }
        }
 
        if(flag || members < 3)
            break;
 
        teams++;
    }
 
    cout << teams << "\n";
 
    return 0;
}