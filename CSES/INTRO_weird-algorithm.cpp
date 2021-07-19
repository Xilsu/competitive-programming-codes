#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long N;
 
    cin >> N;
 
    cout << N;
 
    while (N > 1){
        if(N % 2 == 0){
            N /= 2;
        }
        else{
            N = N * 3 + 1;
        }
 
        cout << " " << N;
    }
 
    cout << "\n";
 
    return 0;
}