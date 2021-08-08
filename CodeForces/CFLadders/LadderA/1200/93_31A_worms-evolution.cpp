/*
    Luis Henrique Morelli
    31A - Worms Evolution
    https://codeforces.com/problemset/problem/31/A
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

    int worms[n];

    for(int i = 0; i < n; i++)
        cin >> worms[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(i != j && j != k && worms[i] == worms[j] + worms[k]){
                    cout << i + 1 << " " << j + 1 << " " << k + 1;

                    return 0;
                }
            }
        }
    }
                    

    cout << "-1\n";

    return 0;
}