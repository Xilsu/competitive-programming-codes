/*
    Luis Henrique Morelli
    Removing Digits
    https://cses.fi/problemset/task/1637
*/

#include <bits/stdc++.h>
 
#define MAX
#define MOD
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    ll count = 0;
 
    cin >> n;
 
    while(n){
        string str = to_string(n);

        n -= *max_element(str.begin(), str.end()) - 48;
        count++;
    }
 
    cout << count << "\n";
 
    return 0;
}