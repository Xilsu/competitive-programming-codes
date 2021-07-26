/*
    Luis Henrique Morelli
    230A - Dragons
    https://codeforces.com/problemset/problem/230/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }

    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int s, n;
    
    cin >> s >> n;

    vector<pair<int, int>> drag (n);

    for(int i = 0; i < n; i++)
        cin >> drag[i].first >> drag[i].second;

    sort(drag.begin(), drag.end(), cmp);

    for(int i = 0; i < n; i++){
        if(drag[i].first >= s){
            cout << "NO\n";

            return 0;
        }

        s += drag[i].second;
    }

    cout << "YES\n";

    return 0;
}