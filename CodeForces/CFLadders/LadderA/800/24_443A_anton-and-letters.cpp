/*
    Luis Henrique Morelli
    443A - Anton and Letters
    https://codeforces.com/contest/443/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string engSet;
 
    getline(cin, engSet);
 
    set<char> letters;
 
    for(int i = 1; i < engSet.size() - 1; i++){
        if(engSet[i] == ',' || engSet[i] == ' ')
            continue;
 
        if(!letters.count(engSet[i]))
            letters.insert(engSet[i]);
    }
 
    cout << letters.size() << "\n";
 
    return 0;
}