/*
    Luis Henrique Morelli
    628B - New Skateboard
    https://codeforces.com/contest/628/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string num;
 
    cin >> num;
 
    ll n = num.size(), count = 0;
 
    for(ll i = 0; i < n; i++)
        if((num[i] - 48) % 4 == 0)
            count++;
 
    for(ll i = 0; i < n - 1; i++)
        if(stoi(num.substr(i, 2)) % 4 == 0)
            count += i + 1;
 
    cout << count << "\n";
 
    return 0;
}