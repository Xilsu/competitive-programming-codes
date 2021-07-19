/*
    Luis Henrique Morelli
    49A - Sleuth
    https://codeforces.com/contest/49/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
bool isVowel(string question){
    string vowels = {"AEIOUY"};
    int n = question.size() - 1;
 
    for(int i = 0; i <= n; i++)
        question[i] = toupper(question[i]);
 
    while(question[n] < 'A' || question[n] > 'Z')
        n--;
 
    for(int i = 0; i < 6; i++)
        if(question[n] == vowels[i])
            return true;
 
    return false;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string question;
 
    getline(cin, question);
    cin >> ws;
 
    if(isVowel(question))
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}