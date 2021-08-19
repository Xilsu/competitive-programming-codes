/*
    Luis Henrique Morelli
    678B - The Same Calendar
    https://codeforces.com/contest/678/problem/B
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
 
    ll year;
 
    cin >> year;
 
    bool flag = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
 
    ll days = 0;
    bool isLeap;
 
    do{
        isLeap = false;
 
        year++;
 
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            days++;
 
            isLeap = true;
        }
            
        days++;
        days %= 7;
    }while(days != 0 || flag != isLeap);
 
    cout << year << "\n";
 
    return 0;
}