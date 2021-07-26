/*
    Luis Henrique Morelli
    122A - Lucky Division
    https://codeforces.com/contest/122/problem/A
*/

#include <bits/stdc++.h>

#define MAX

using namespace std;

typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> luckyNums {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n;

    cin >> n;

    for(int i = 0; i < 14; i++)
        if(n % luckyNums[i] == 0){
            cout << "YES\n";

            return 0;
        }

    cout << "NO\n";
 
    return 0;
}