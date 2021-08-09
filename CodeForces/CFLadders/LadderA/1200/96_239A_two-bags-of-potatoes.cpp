/*
    Luis Henrique Morelli
    239A - Two Bags of Potatoes
    https://codeforces.com/problemset/problem/239/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int y, k, n;

    cin >> y >> k >> n;

    int x = k - y % k;

    if(y >= n || y + x > n)
        cout << "-1\n";
    else{
        for(int i = x; i + y <= n; i += k)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}