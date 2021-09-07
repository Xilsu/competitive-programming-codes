/*
    Luis Henrique Morelli
    954A - Diagonal Walking
    https://codeforces.com/contest/954/problem/A
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

    int length = 0;

    for(int i = 0; i < n; i++){
        if(i < n - 1 && s[i] == 'U' && s[i + 1] == 'R')
            i++;
        else if(i < n - 1 && s[i] == 'R' && s[i + 1] == 'U')
            i++;

        length++;
    }

    cout << length << "\n";

    return 0;
}