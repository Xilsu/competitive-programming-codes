/*
    Luis Henrique Morelli
    903B - The Modcrab
    https://codeforces.com/contest/903/problem/B
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

    int h1, a1, c1, h2, a2;

    cin >> h1 >> a1 >> c1 >> h2 >> a2;

    vector<string> actions;
    
    while(h2 > 0){
        if(h1 - a2 <= 0 && h2 - a1 > 0){
            actions.push_back("HEAL\n");
            
            h1 += c1;
        }
        else{
            actions.push_back("STRIKE\n");

            h2 -= a1;
        }

        h1 -= a2;
    }

    cout << actions.size() << "\n";

    for(auto &it : actions)
        cout << it;

    return 0;
}