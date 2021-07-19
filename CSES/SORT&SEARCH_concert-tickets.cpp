#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n, m;

    cin >> n >> m;

    multiset<long> h;

    for(long i = 0; i < n; i++){
        int aux;

        cin >> aux;

        h.insert(aux);
    }

    for(long i = 0; i < m; i++){
        int customer;

        cin >> customer;

        auto it = h.lower_bound(customer);

        if(h.empty() || (it == h.begin() && *it > customer)){
            cout << "-1\n";
        }
        else{
            if(it == h.end() || *it > customer){
                it--;
            }

            cout << *it << "\n";

            h.erase(it);
        }
    }

    return 0;
}