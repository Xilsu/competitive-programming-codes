#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n;

    cin >> n;

    for(long i = 1; i <= n; i++){
        cout << i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << "\n";
    }

    return 0;
}