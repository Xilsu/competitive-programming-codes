/*
    Luis Henrique Morelli
    903A - Hungry Student Problem
    https://codeforces.com/contest/903/problem/A
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

    vi chunks;

    for(int a = 0; a <= 34; a++){
        for(int b = 0; b <= 15; b++){
            int sum = 3 * a + 7 * b;
            
            if(sum > 100)
                break;
            
            chunks.push_back(sum);
        }
    }

    sort(chunks.begin(), chunks.end());

    int n;

    cin >> n;

    while(n--){
        int x;

        cin >> x;

        cout << (binary_search(chunks.begin(), chunks.end(), x) ? "YES\n" : "NO\n");
    }

    return 0;
}