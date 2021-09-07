/*
    Luis Henrique Morelli
    976A - Minimum Binary Number
    https://codeforces.com/contest/976/problem/A
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

    int n;
    string bin;

    cin >> n >> ws >> bin;

    int zeros = 0, ones = 0;

    for(int i = 0; i < bin.size(); i++)
        bin[i] == '0' ? zeros++ : ones++;

    string s;

    if(ones > 0)
        s += '1';

    for(int i = 0; i < zeros; i++)
        s += '0';

    cout << s << "\n";

    return 0;
}