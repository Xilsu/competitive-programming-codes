#include <bits/stdc++.h>
 
#define MAX 500
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int h, w;
 
    cin >> h >> w;
 
    string a[MAX + 1];
 
    for(int i = 0; i < h; i++){
        cin >> a[i];
    }
 
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(i == 0 || a[i][j] == '#' || (i != h - 1 && j % 2 == 0))
                cout << '#';
            else
                cout << '.';
        }
 
        cout << "\n";
    }
 
    cout << "\n";
 
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(i == h - 1 || a[i][j] == '#' || (i != 0 && j % 2 == 1))
                cout << '#';
            else
                cout << '.';
        }
 
        cout << "\n";
    }
 
    return 0;
}