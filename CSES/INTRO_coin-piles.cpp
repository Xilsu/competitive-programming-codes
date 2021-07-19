#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long T;

    cin >> T;

    while(T--){
        long a, b;

        cin >> a >> b;

        if(b > a){
            swap(a, b);
        }

        if(a <= 2*b && (a + b) % 3 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}