#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long N;

    cin >> N;

    long digits;

    digits = 0;

    while(N >= 5){
        digits += N / 5;

        N /= 5;
    }

    cout << digits << "\n";

    return 0;
}