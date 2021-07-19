/*
    Luis Henrique Morelli
    43A - Football
    https://codeforces.com/contest/43/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
bool cmp(pair<string, int> a, pair<string, int> b){
    return a.second < b.second;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
 
    cin >> n;
 
    map<string, int> teamsGoals;
 
    for(int i = 0; i < n; i++){
        string team;
 
        cin >> team;
 
        if(!teamsGoals.count(team)){
            teamsGoals.insert({team, 1});
        }
        else
            teamsGoals[team]++;
    }
 
    map<string, int>::iterator it = max_element(teamsGoals.begin(), teamsGoals.end(), cmp);
 
    cout << it->first << "\n";
 
    return 0;
}