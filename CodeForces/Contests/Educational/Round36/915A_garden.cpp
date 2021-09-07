/*
    Luis Henrique Morelli
    915A - Garden
    https://codeforces.com/contest/915/problem/A
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

    int n, k;

    cin >> n >> k;

    int bucket, ans = 0;

    for(int i = 0; i < n; i++){
        cin >> bucket;

        if(k % bucket == 0)
            ans = max(ans, bucket);
    }
        
    cout << k / ans << "\n";

    return 0;
}