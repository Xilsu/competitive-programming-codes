/*
    Luis Henrique Morelli
    479A - Expression
    https://codeforces.com/contest/479/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int a, b, c;

    cin >> a >> b >> c;

    int maxSum = a + b + c;

    maxSum = max(maxSum, a * b * c);
    maxSum = max(maxSum, a * b + c);
    maxSum = max(maxSum, a * (b + c));
    maxSum = max(maxSum, a + b * c);
    maxSum = max(maxSum, (a + b) * c);

    cout << maxSum << "\n";
        
    return 0;
}