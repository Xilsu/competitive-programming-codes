/*
    Luis Henrique Morelli
    946A - Partition
    https://codeforces.com/contest/946/problem/A
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

    int n, in, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> in;
        sum += abs(in);
    }

    cout << sum << "\n";

    return 0;
}