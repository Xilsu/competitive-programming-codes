/*
    Luis Henrique Morelli
    962A - Equator
    https://codeforces.com/contest/962/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    vi a (n);
    int sum = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    int half = ceil((double) sum / 2), day = 0;

    sum = 0;

    for(int i = 0; i < n; i++){
        sum += a[i];
        day++;

        if(sum >= half)
            break;
    }

    cout << day << "\n";

    return 0;
}