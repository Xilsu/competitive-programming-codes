/*
    Luis Henrique Morelli
    268A - Games
    https://codeforces.com/contest/268/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
 
    cin >> n;
 
    vector<pair<int, int>> teams;
 
    for(int i = 0; i < n; i++){
        int home, guest;
 
        cin >> home >> guest;
 
        teams.push_back({home, guest});
    }
 
    int counter = 0;
 
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(j != i && teams[i].first == teams[j].second)
                counter++;
 
    cout << counter << "\n";
 
    return 0;
}