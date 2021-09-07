/*
    Luis Henrique Morelli
    954B - String Typing
    https://codeforces.com/contest/954/problem/B
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

    int n;
    string s;

    cin >> n >> ws >> s;

    int dup = 1;

    for(int i = 1; i <= n; i++){
        string aux1 = s.substr(0, i), aux2 = s.substr(i, i);

        if(aux1 == aux2)
            dup = max(dup, i);
    }

    cout << n - dup + 1 << "\n";

    return 0;
}