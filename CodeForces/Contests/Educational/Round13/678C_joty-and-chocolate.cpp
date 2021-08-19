/*
    Luis Henrique Morelli
    678C - Joty and Chocolate
    https://codeforces.com/contest/678/problem/C
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int gcd(int a, int b){
    if(b == 0)
        return a;
 
    return (b, a % b);
}
 
int lcm(int a, int b){
    return a * b / gcd(a, b);
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll n, a, b, p, q;
 
    cin >> n >> a >> b >> p >> q;

    ll divAB = n / lcm(a, b), divA = n / a - divAB, divB = n / b - divAB;

    cout << divAB * max(p, q) + divA * p + divB * q << "\n"; 
 
    return 0;
}