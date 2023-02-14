/*
    Luis Henrique Morelli
    1560B - Who's Opposite?
    https://codeforces.com/contest/1560/problem/B
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
 
    int t;

    cin >> t;

    while(t--){
        int a, b, c;

        cin >> a >> b >> c;

        if(b < a)
            swap(a, b);

        int mid = b - a, end = mid * 2;

        if(c > end || b > end)
            cout << "-1\n";
        else{
            int d = (c + mid) % end;

            if(d == 0)
                d = end;

            cout << d << "\n";
        }
    }
 
    return 0;
}