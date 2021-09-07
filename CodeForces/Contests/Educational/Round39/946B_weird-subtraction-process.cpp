/*
    Luis Henrique Morelli
    946B - Weird Subtraction Process
    https://codeforces.com/contest/946/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b;

    cin >> a >> b;

    while(a != 0 && b != 0){
        if(a >= 2 * b)
            a -= 2 * b * (a / (2 * b));
        else if (b >= 2 * a){
            b -= 2 * a * (b / (2 * a));
        }
        else
            break;
    }

    cout << a << " " << b << "\n";

    return 0;
}