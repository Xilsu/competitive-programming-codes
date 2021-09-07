/*
    Luis Henrique Morelli
    863A - Quasi-palindrome
    https://codeforces.com/contest/863/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool isPalindrome(string s, int n){
    for(int i = 0; i < n / 2; i++)
        if(s[i] != s[n - i - 1])
            return false;

    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    cin >> s;

    int n = s.size() - 1;

    while(s[n--] == '0')
		s.pop_back();

    if(isPalindrome(s, s.size()))
        cout << "YES\n";
    else    
        cout << "NO\n";

    return 0;
}