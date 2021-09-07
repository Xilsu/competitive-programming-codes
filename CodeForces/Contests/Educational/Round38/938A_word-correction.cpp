/*
    Luis Henrique Morelli
    938A - Word Correction
    https://codeforces.com/contest/938/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<char> v = {'a', 'e', 'i', 'o', 'u', 'y'};
    int n;
    string s;

    cin >> n >> ws >> s;

    string aux;
    bool f = 0;

    for(int i = 0; i < n; i++){
        if(v.count(s[i])){
            if(!f)
                aux += s[i];

            f = 1;
        }
        else{
            aux += s[i];

            f = 0;
        }
    }

    cout << aux << "\n";

    return 0;
}