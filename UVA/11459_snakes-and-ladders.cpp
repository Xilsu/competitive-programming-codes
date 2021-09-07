/*
    Luis Henrique Morelli
    11459 - Snakes and Ladders
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2454
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

    int t;

    cin >> t;

    while(t--){
        int a, b, c;

        cin >> a >> b >> c;

        vi shortcut (101, -1);

        for(int i = 0; i < b; i++){
            int s, f;

            cin >> s >> f;

            shortcut[s] = f;
        }

        vi die (c);

        for(int i = 0; i < c; i++)
            cin >> die[i];

        if(a == 0)
            continue;

        vi players (a, 1);
        int n = 0;

        for(int i = 0; i < c; i++){
            int pos = die[i] + players[n];

            if(pos > 100)
                pos = 100;

            shortcut[pos] != -1 ? players[n] = shortcut[pos] : players[n] = pos;

            if(players[n] == 100)
                break;
            
            n = (n + 1) % a;
        }

        for(int i = 0; i < a; i++)
            cout << "Position of player " << i + 1 << " is " << players[i] << ".\n";
    }

    return 0;
}