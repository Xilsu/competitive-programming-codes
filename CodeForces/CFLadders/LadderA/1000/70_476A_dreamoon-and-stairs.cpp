/*
    Luis Henrique Morelli
    476A - Dreamoon and Stairs
    https://codeforces.com/problemset/problem/476/A
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

    int twoSteps = n / 2, steps;

    while(twoSteps != -1){
        steps = twoSteps + (n - twoSteps * 2);

        if(steps % m == 0){
            cout << steps << "\n";

            return 0;
        }

        twoSteps--;
    }

    cout << "-1\n";
        
    return 0;
}