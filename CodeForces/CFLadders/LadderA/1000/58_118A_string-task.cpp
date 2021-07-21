/*
    Luis Henrique Morelli
    118A - String Task
    https://codeforces.com/contest/118/problem/A
*/

#include <bits/stdc++.h>

#define MAX

using namespace std;

typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<char> vowels {'a', 'e', 'i', 'o', 'u', 'y'};

    string str;

    cin >> str;

    for(unsigned int i = 0; i < str.size(); i++){
        char letter = tolower(str[i]);
        
        if(!vowels.count(letter))
            cout << "." << letter;
    }
 
    return 0;
}