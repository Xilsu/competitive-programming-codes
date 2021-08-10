/*
    Luis Henrique Morelli
    598B - Queries on a String
    https://codeforces.com/contest/598/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;

    cin >> str >> ws;

    int q;

    cin >> q;

    while(q--){
        int l, r, k;

        cin >> l >> r >> k;

        l--;
        r--;

        int length = r - l + 1, mod = k % length, count = 0;
        string aux = str.substr(l, length);
        
        for(int i = length - mod; i < length; ++i){
            str[l + count] = aux[i];

            count++;
        }
            
        for(int i = 0; i < length - mod; ++i){
            str[l + count] = aux[i];

            count++;
        }

        cout << str << "\n";
    }

    cout << str << "\n";

    return 0;
}