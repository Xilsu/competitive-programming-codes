/*
    Luis Henrique Morelli
    35A - Shell Game
    https://codeforces.com/contest/35/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ifstream inFile;
    vector<int> cups (4, 0);
    int first, second;
 
    inFile.open("input.txt");
 
    inFile >> first;
 
    cups[first] = 1;
 
    for(int i = 1; i <= 3; i++){
        inFile >> first >> second;
 
        swap(cups[first], cups[second]);
    }
 
    inFile.close();
 
    ofstream outFile;
 
    outFile.open("output.txt");
 
    for(int i = 1; i <= 3; i++){
        if(cups[i] == 1){
            outFile << i << "\n";
 
            break;
        }
    }
 
    outFile.close();
 
    return 0;
}