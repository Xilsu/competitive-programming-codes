/*
    Luis Henrique Morelli
    389A - Fox and Number Game
    https://codeforces.com/problemset/problem/389/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int gcd(int a, int b){
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;

    cin >> n;

    int input, divisor;

    cin >> input;

    divisor = input;

    for(int i = 1; i < n; i++){
        cin >> input;

        divisor = gcd(input, divisor);
    }

    cout << divisor * n << "\n";

    return 0;
}