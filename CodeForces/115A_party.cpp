/*
    Luis Henrique Morelli
    115A - Party
    https://codeforces.com/problemset/problem/115/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    
    cin >> n;

    int employees[n + 1];

    for(int i = 1; i <= n; i++)
        cin >> employees[i];

    int parties = 1;

    for(int i = 1; i <= n; i++){
        if(employees[i] != -1){
            int superior = employees[i], depth = 1;

            while(superior != -1){
                superior = employees[superior];

                depth++;
            }

            parties = max(depth, parties);
        }
    }
        
    cout << parties << "\n";

    return 0;
}