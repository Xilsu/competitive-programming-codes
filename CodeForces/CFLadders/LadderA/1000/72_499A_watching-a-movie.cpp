/*
    Luis Henrique Morelli
    499A - Watching a movie
    https://codeforces.com/contest/499/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, x;

    cin >> n >> x;

    int begin, end, minute = 0, watched = 0;

    for(int i = 0; i < n; i++){
        cin >> begin >> end;
        
        while(minute + x < begin)
            minute += x;

        watched += end - minute;
        minute = end;
    }

    cout << watched << "\n";
        
    return 0;
}