#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long N;

    cin >> N;

    vector<long> array;
    
    for(long i = 0; i < N - 1; i++){
        long aux;
        
        cin >> aux;

        array.push_back(aux);
    }

    sort(array.begin(), array.end());

    for(long i = 1; i <= N; i++){
        if(!binary_search(array.begin(), array.end(), i)){
            cout << i << "\n";
        }
    }

    return 0;
}