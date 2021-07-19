#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long N;

    cin >> N;

    vector<long> array;

    for(long i = 0; i < N; i++){
        int aux;

        cin >> aux;

        array.push_back(aux);
    }

    ll turns;

    turns = 0;

    for(long i = 1; i < N; i++){
        while(array[i] < array[i - 1]){
            array[i]++;

            turns++;
        }
    }

    cout << turns << "\n";

    return 0;
}