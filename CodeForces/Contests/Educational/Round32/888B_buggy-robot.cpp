/*
    Luis Henrique Morelli
    888B - Buggy Robot
    https://codeforces.com/contest/888/problem/B
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
    
    string s;
    int n;

    cin >> n >> ws >> s;

    int rl = 0, ud = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'R')
            rl++;
        else if(s[i] == 'L')
            rl--;
        else if(s[i] == 'U')
            ud++;
        else
            ud--;
    }
        
    cout << n - abs(rl) - abs(ud) << "\n";

    return 0;
}