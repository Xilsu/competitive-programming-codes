/*
    Luis Henrique Morelli
    265A - Colorful Stones (Simplified Edition)
    https://codeforces.com/contest/265/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string sequence, commands;
 
    cin >> sequence >> commands;
 
    int comSize = commands.size(), seqSize = sequence.size();
    int position = 1;
 
    for(int i = 0; i < comSize; i++){
        if(commands[i] == sequence[position - 1])
            position++;
 
        if(position >= seqSize)
            break;
    }
 
    cout << position << "\n";
 
    return 0;
}