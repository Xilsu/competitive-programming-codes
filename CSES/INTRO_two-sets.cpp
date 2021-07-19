#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long N;

    cin >> N;

    vector<long> a, b;

    if(N % 4 == 3 || N % 4 == 0){
        cout << "YES\n";
        
        for(long i = N; i > 1; i -= 4){
            a.push_back(array[i]);
            
            if(i - 3 >= 0){
                a.push_back(array[i - 3]);
            }

            b.push_back(array[i - 1]);
            b.push_back(array[i - 2]);
        }

        long size;

        size = a.size();

        cout << size << "\n" << a[0];

        for(long i = 1; i < size; i++){
            cout << " " << a[i];
        }

        cout << "\n";

        size = b.size();

        cout << b.size() << "\n" << b[0];

        for(long i = 1; i < size; i++){
            cout << " " << b[i];
        }

        cout << "\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}