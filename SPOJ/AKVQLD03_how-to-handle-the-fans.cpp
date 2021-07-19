#include <bits/stdc++.h>
 
#define MAX 100
 
using namespace std;

class fenwick{
    public:
        vector<long> ft;

        fenwick(long n){
            ft.assign(n + 1, 0);
        }

        void add(long p, long v){
            while(p < ft.size()){
                ft[p] += v;

                p += (p & -p);
            }
        }

        long function(long p){
            long sum;

            sum = 0;

            while(p > 0){
                sum += ft[p];

                p -= (p & -p); 
            }

            return sum;
        }

        long query(long inf, long sup){
            return function(sup) - function(inf - 1);
        }
};
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long n, q;

    cin >> n >> q;

    fenwick ft (n);

    for(long i = 0; i < q; i++){
        string c;
        long a, b;

        cin >> c >> a >> b;

        if(c == "find"){
            cout << ft.query(a, b) << "\n";
        }
        else{
            ft.add(a, b);
        }
    }
 
    return 0;
}