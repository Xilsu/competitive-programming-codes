/*
    Luis Henrique Morelli
    373A - Collecting Beats is Fun
    https://codeforces.com/contest/373/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
bool canPress(vector<int> tiles, int k){
    for(int i = 1; i <= 9; i++)
        if(tiles[i] > k * 2)
            return false;
 
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int k;
 
    cin >> k;
 
    vector<int> tiles (10, 0);
 
    char input;
 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> input;
 
            if(input != '.')
                tiles[input - 48]++;
        }
    }
 
    if(canPress(tiles, k))
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}