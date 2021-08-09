/*
    Luis Henrique Morelli
    234A - Lefthanders and Righthanders
    https://codeforces.com/problemset/problem/234/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ifstream input;

    input.open("input.txt", ios::in);

    int n;
    string handside;

    input >> n >> ws >> handside;

    int mid = n / 2;

    ofstream output;

    output.open("output.txt", ios::out);

    for(int i = 0; i < n / 2; i++){
        if(handside[i] == 'R' && handside[mid] == 'L')
            output << mid + 1 << " " << i + 1 << "\n";
        else
            output << i + 1 << " " << mid + 1 << "\n";

        mid++;
    }

    return 0;
}