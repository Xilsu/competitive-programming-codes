#include <bits/stdc++.h>

using namespace std;

void createWays(long long X[], int Y){
    for(int j = Y; j <= 30000; j++){
        X[j] += X[j - Y];
    }
}

int main(){
    long long ways[30010] = {0};

    ways[0] = 1;

    createWays(ways, 1);
    createWays(ways, 5);
    createWays(ways, 10);
    createWays(ways, 25);
    createWays(ways, 50);

    int N;

    while(cin >> N){
        if(ways[N] == 1){
           cout << "There is only " << ways[N] << " way to produce " << N << " cents change." << endl;
        }
        else{
            cout << "There are " << ways[N] << " ways to produce " << N << " cents change." << endl;
        }
    }

    return 0;
}