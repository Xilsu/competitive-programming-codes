/*
    Luis Henrique Morelli
    893A - Chess For Three
    https://codeforces.com/contest/893/problem/A
*/
    
#include <bits/stdc++.h>
    
#define MAX 3
    
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
    
    cin >> n;
    
    vi players (MAX + 1);
    int a;
    
    players[1] = players[2] = true;
    players[3] = false;
    
    for(int i = 0; i < n; i++){
        cin >> a;
    
        if(!players[a]){
            cout << "NO\n";
    
            return 0;
        }
    
        for(int j = 1; j <= MAX; j++){
            if(j == a)
                continue;
    
            players[j] = !players[j];
        }
    }
    
    cout << "YES\n";
    
    return 0;
}