#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long N;

    cin >> N;

    if(N == 1){
        cout << N << "\n";
    }
    else if(N == 2 || N == 3){
        cout << "NO SOLUTION\n";
    }
    else{
        cout << 2;

        for(int i = 4; i <= N; i += 2){
            cout << " " << i;
        }
        for(int i = 1; i <= N; i += 2){
            cout << " " << i;
        }

        cout << "\n";
    }

    return 0;
}