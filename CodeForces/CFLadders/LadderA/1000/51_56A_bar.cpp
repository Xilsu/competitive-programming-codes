/*
    Luis Henrique Morelli
    56A - Bar
    https://codeforces.com/contest/56/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    set<string> drinks {"ABSINTH", "BEER", "BRANDY",
                        "CHAMPAGNE", "GIN", "RUM", "SAKE",
                        "TEQUILA", "VODKA", "WHISKEY", "WINE"};
 
    int n;
 
    cin >> n >> ws;
 
    string monitoring;
    int monitorCount = 0;
 
    for(int i = 0; i < n; i++){
        cin >> monitoring;
 
        if(isdigit(monitoring[0])){
            int age = stoi(monitoring);
 
            if(age < 18)
                monitorCount++;
        }
        else if(drinks.count(monitoring))
            monitorCount++;
    }
 
    cout << monitorCount << "\n";
 
    return 0;
}