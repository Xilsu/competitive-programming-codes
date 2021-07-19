#include <bits/stdc++.h>

using namespace std;

int main(){
    long long N;

    while(cin >> N && N >= 0){
        long long arestas = 0;

        for(long long i = 1; i < N; i++){
            arestas += i;
        }

        cout << arestas + N + 1 << endl;
    }

    return 0;
}