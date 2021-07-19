/*
    Luis Henrique Morelli
    376A - Lever
    https://codeforces.com/contest/376/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string lever;
 
    cin >> lever;
 
    unsigned int pivotPosition = lever.find('^');
    long long int right = 0, left = 0;
 
    for(unsigned int i = 0; i < pivotPosition; i++){
        if(lever[i] != '=')
            left += (lever[i] - 48) * (pivotPosition - i);
    }
 
    for(unsigned int i = pivotPosition + 1; i < lever.size(); i++){
        if(lever[i] != '=')
            right += (lever[i] - 48) * (i - pivotPosition);
    }
 
    if(right == left)
        cout << "balance\n";
    else if(right > left)
        cout << "right\n";
    else
        cout << "left\n";
 
    return 0;
}