/*
    Luis Henrique Morelli
    350A - TL
    https://codeforces.com/contest/350/problem/A
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

    int correct[n];

    for(int i = 0; i < n; ++i)
        cin >> correct[i];

    int wrong[m];

    for(int i = 0; i < m; i++)
        cin >> wrong[i];
    
    sort(correct, correct + n);
    sort(wrong, wrong + m);

    int v = max(correct[0] * 2, correct[n - 1]);

    if(v < wrong[0])
        cout << v << "\n";
    else
        cout << "-1\n";

    return 0;
}