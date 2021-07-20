/*
    Luis Henrique Morelli
    108A - Palindromic Times
    https://codeforces.com/contest/108/problem/A
*/

#include <bits/stdc++.h>

#define MAX 

using namespace std;

typedef long l;
typedef long long ll;

int hourPalindrome(string hour){
    reverse(hour.begin(), hour.end());

    if(hour.size() == 1)
        hour.push_back('0');

    return stoi(hour);
}

int main(){
    int hour, possibleMinute;
    char colon;
 
    cin >> hour >> colon >> possibleMinute;

    int minute = hourPalindrome(to_string(hour));

    if(minute >= 60 || possibleMinute >= minute){
        do{
            hour++;

            if(hour > 23)
                hour = 0;

            minute = hourPalindrome(to_string(hour));
        }while(minute >= 60);
    }
 
    printf("%02d:%02d", hour, minute);
 
    return 0;
}