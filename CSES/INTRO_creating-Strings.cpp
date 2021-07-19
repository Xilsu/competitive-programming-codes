#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;

    cin >> str;

    long permutations;

    permutations = 0;

    sort(str.begin(), str.end());

    do{
        permutations++;
    }while(next_permutation(str.begin(), str.end()));

    cout << permutations << "\n";

    do{
        cout << str << "\n";
    }while(next_permutation(str.begin(), str.end()));

    return 0;
}