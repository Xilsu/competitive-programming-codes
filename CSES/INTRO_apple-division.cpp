#include <bits/stdc++.h>

#define MAX 20

using namespace std;

typedef long long ll;

long diff(vector<long> a, vector<long> b){
    long x;

    x = 0;
    
    for(long i = 0; i < a.size(); i++){
        x += a[i];
    }

    long y = 0;

    y = 0;

    for(long i = 0; i < b.size(); i++){
        y += b[i];
    }

    return abs(x - y);
}

long minimumDiff(long w[], long i, long n, vector<long> a, vector<long> b, long minimum){
    if(i == n){
        return diff(a, b);    
    }

    a.push_back(w[i]);

    minimum = min(minimum, minimumDiff(w, i + 1, n, a, b, minimum));

    a.pop_back();

    b.push_back(w[i]);

    minimum = min(minimum, minimumDiff(w, i + 1, n, a, b, minimum));

    b.pop_back();

    return minimum;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n;

    cin >> n;

    long w[MAX];

    for(long i = 0; i < n; i++){
        cin >> w[i];
    }

    vector<long> a, b; 

    cout << minimumDiff(w, 0, n, a, b, LONG_LONG_MAX) << "\n";

    return 0;
}