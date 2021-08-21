/*
    Luis Henrique Morelli
    691B - s-palindrome
    https://codeforces.com/contest/691/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
bool isPalindromic(string str, int n){
    map<char, char> symmetric;
    
    symmetric['A'] = 'A';
    symmetric['H'] = 'H';
    symmetric['I'] = 'I';
    symmetric['M'] = 'M';
    symmetric['O'] = 'O';
    symmetric['o'] = 'o';
    symmetric['T'] = 'T';
    symmetric['U'] = 'U';
    symmetric['V'] = 'V';
    symmetric['v'] = 'v';
    symmetric['W'] = 'W';
    symmetric['w'] = 'w';
    symmetric['X'] = 'X';
    symmetric['x'] = 'x';
    symmetric['Y'] = 'Y';
    symmetric['b'] = 'd';
    symmetric['d'] = 'b';
    symmetric['p'] = 'q';
    symmetric['q'] = 'p';
    
    for(int i = 0; i <= n / 2; i++){
        if(symmetric.count(str[i])){
            if(symmetric[str[i]] != str[n - i - 1])
                return false;
        }
        else
            return false;
    }
        
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;

    cin >> str;

    int n = str.size();

    if(isPalindromic(str, n))
        cout << "TAK\n";
    else
        cout << "NIE\n";
 
    return 0;
}