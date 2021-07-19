#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long t;

    cin >> t;

    while(t--){
        long row, col;

        cin >> row >> col;

        if(row > col){
            if(row % 2 == 0){
                cout << (row * row) - (col - 1) << "\n";
            }
            else{
                cout << ((row - 1) * (row - 1)) + col << "\n";
            }
        }
        else{
            if(col % 2 == 0){
                cout << ((col - 1) * (col - 1)) + row << "\n";
            }
            else{
                cout << (col * col) - (row - 1) << "\n";
            }
        }
    }

    return 0;
}