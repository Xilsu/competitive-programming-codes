/*
    Luis Henrique Morelli
    69A - Young Physicist
    https://codeforces.com/contest/69/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX

using namespace std;
 
typedef long int l;
typedef long long int ll;
 
bool isEquilibrated(vector<int> coords){
    for(int i = 0; i < 3; i++)
        if(coords[i] != 0)
            return false;
 
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
 
    cin >> n;
 
    vector<int> coords (3, 0);
    int x, y, z;
 
    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
 
        coords[0] += x;
        coords[1] += y;
        coords[2] += z;
    }
 
    if(isEquilibrated(coords))
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}