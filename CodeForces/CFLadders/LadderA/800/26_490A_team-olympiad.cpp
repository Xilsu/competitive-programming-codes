/*
    Luis Henrique Morelli
    490A - Team Olympiad
    https://codeforces.com/contest/490/problem/A
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
 
    vector<int> ap [3];
 
    for(int i = 1; i <= n; i++){
        int aux;
 
        cin >> aux;
 
        ap[aux - 1].push_back(i);
    }
 
    int min = ap[0].size();
 
    for(int i = 1; i < 3; i++){
        int apMin = ap[i].size();
        
        if(apMin < min)
            min = apMin;
    }
 
    cout << min << "\n";
 
    for(int i = 0; i < min; i++)
        cout << ap[0][i] << " " << ap[1][i] << " " << ap[2][i] << "\n";
 
    return 0;
}