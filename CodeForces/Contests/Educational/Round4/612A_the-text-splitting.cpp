/*
    Luis Henrique Morelli
    612A - The Text Splitting
    https://codeforces.com/contest/612/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, p, q;

    cin >> n >> p >> q >> ws;

    string str;
    
    cin >> str;

    int x, y;

    if(q > p)
        swap(p, q);

    x = n / p;

    while(x >= 0){
        y = (n - p * x) / q;

        if(p * x + q * y == n){
            cout << x + y << "\n";

            for(int i = 0; i < x; i++)
                cout << str.substr(p * i, p) << "\n";

            for(int i = 0; i < y; i++)
                cout << str.substr(p * x + q * i, q) << "\n";

            return 0;
        }

        x--;
    }

    cout << "-1\n";

    return 0;
}