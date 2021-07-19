#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n, x;

    cin >> n >> x;

    vector<long> w;

    for(long i = 0; i < n; i++){
        long aux;

        cin >> aux;

        w.push_back(aux);
    }

    sort(w.begin(), w.end());

    long boats, left, right;

    boats = left = 0;
    right = n - 1;

    while(left <= right){
        if(w[left] + w[right] <= x){
            left++;
            right--;
        }
        else{
            right--;
        }

        boats++;
    }

    cout << boats << "\n";

    return 0;
}