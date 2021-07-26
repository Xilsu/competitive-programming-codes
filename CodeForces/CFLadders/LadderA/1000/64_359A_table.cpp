/*
    Luis Henrique Morelli
    359A - Table
    https://codeforces.com/problemset/problem/359/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;

    cin >> n >> m;

    n--;
    m--;

    bool corner = false, edge = false;
    int input;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            cin >> input;

            if(input == 1){
                if((i == 0 && j == 0) || (i == n && j == n) 
                    || (i == 0 && j == m) || (i == n && j == 0))
                    corner = true;
                else if(i == 0 || j == 0 || i == n || j == m)
                    edge = true;
            }
        }
    }

    if(corner)
        cout << "1\n";
    else if(edge)
        cout << "2\n";
    else
        cout << "4\n";

    return 0;
}