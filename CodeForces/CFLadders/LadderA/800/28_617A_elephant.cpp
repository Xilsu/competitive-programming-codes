/*
    Luis Henrique Morelli
    617A - Elephant
    https://codeforces.com/contest/617/problem/A
*/


#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
 
    cin >> n;
 
    int stepsLength[] = {5, 4, 3, 2, 1};
    int steps = 0, index = 0;
 
    while(n){
        if(n - stepsLength[index] >= 0){
            n -= stepsLength[index];
 
            steps++;
        }
        else
            index++;
    }
 
    cout << steps << "\n";
 
    return 0;
}