/*
    Luis Henrique Morelli
    27A - Next Test
    https://codeforces.com/problemset/problem/27/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n;

    cin >> n;

    vector<int> indexes (n);

    for(int i = 0; i < n; i++)
        cin >> indexes[i];

    sort(indexes.begin(), indexes.end());

    for(int i = 1; i <= n; i++){
        if(indexes[i - 1] != i){
            cout << i << "\n";

            return 0;
        }
    }

    cout << n + 1 << "\n";
        
    return 0;
}