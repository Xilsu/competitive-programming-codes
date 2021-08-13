/*
    Luis Henrique Morelli
    622B - The Time
    https://codeforces.com/contest/622/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int hour, minute, input;
    char aux;

    cin >> hour >> aux >> minute >> input;

    minute += input % 60;

    if(minute >= 60){
        minute %= 60;
        hour++;
    }

    hour += input / 60;
    hour %= 24;

    printf("%02d:%02d", hour, minute);   

    return 0;
}