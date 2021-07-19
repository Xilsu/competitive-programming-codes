/*
    Luis Henrique Morelli
    439A - Devu, the Singer and Churu, the Joker
    https://codeforces.com/contest/439/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, d;
 
    cin >> n >> d;
 
    int input, songTime = 0, jokeCount = 0;
 
    for(int i = 0; i < n - 1; i++){
        cin >> input;
 
        songTime += input + 10;
        jokeCount += 2;
    }
 
    cin >> input;
 
    songTime += input;
 
    if(songTime <= d)
        cout << jokeCount + (d - songTime) / 5 << "\n";
    else
        cout << "-1\n";
 
    return 0;
}