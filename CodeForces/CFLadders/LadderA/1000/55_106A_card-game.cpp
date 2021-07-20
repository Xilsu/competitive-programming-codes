/*
    Luis Henrique Morelli
    106A - Card Game
    https://codeforces.com/contest/106/problem/A
*/

#include <bits/stdc++.h>

#define MAX 

using namespace std;

typedef long l;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<char, int> cost {{'6', 1}, {'7', 2}, {'8', 3},
                            {'9', 4}, {'T', 5}, {'J', 6},
                            {'Q', 7}, {'K', 8}, {'A', 9}};

    char trump;
    string first, second;

    cin >> trump >> first >> second;

    if(first[1] == second[1]){
        if(cost[first[0]] > cost[second[0]])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else if(first[1] == trump)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}