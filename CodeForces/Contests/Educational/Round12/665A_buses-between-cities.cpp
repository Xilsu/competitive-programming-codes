/*
    Luis Henrique Morelli
    665A - Buses Between Cities
    https://codeforces.com/contest/665/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, ta, b, tb;

    cin >> a >> ta >> b >> tb;

    int hours, minutes;
    char aux;

    cin >> hours >> aux >> minutes;

    int begin = hours * 60 + minutes, end = begin + ta, buses = 0;

    for(int i = 5 * 60; i <= 23 * 60 + 59; i += b){
        int toA = i + tb;
        
        if(i < end && toA > begin)
            buses++;
    }

    cout << buses << "\n";

    return 0;
}