/*
    Luis Henrique Morelli
    353A - Domino
    https://codeforces.com/problemset/problem/353/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    vector<pair<int, int>> dominoes;
    pair<int, int> input;
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; ++i){
        cin >> input.first >> input.second;

        sum1 += input.first;
        sum2 += input.second;

        dominoes.push_back(input);
    }

    if(sum1 % 2 == 0 && sum2 % 2 == 0)
        cout << "0\n";
    else if((sum1 % 2 != 0 && sum2 % 2 == 0) || (sum1 % 2 == 0 && sum2 % 2 != 0))
        cout << "-1\n";
    else{
        for(int i = 0; i < n; ++i){
            if((dominoes[i].first % 2 != 0 && dominoes[i].second % 2 == 0) || (dominoes[i].first % 2 == 0 && dominoes[i].second % 2 != 0)){
                cout << "1\n";

                return 0;
            }
        }

        cout << "-1\n";
    }

    return 0;
}