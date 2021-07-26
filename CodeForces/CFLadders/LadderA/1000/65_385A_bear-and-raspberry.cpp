/*
    Luis Henrique Morelli
    385A - Bear and Raspberry
    https://codeforces.com/problemset/problem/385/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, c;

    cin >> n >> c;

    vector<int> barrels (n);

    for(int i = 0; i < n; i++)
        cin >> barrels[i];

    int maxProfit = 0;

    for(int i = 0; i < n - 1; i++)
        maxProfit = max(maxProfit, barrels[i] - barrels[i + 1] - c);

    cout << maxProfit << "\n";

    return 0;
}