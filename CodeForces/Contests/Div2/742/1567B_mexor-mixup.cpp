/*
    Luis Henrique Morelli
    1567B - MEXor Mixup
    https://codeforces.com/contest/1567/problem/B
*/
    
#include <bits/stdc++.h>
    
#define MAX 300000
    
using namespace std;
    
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vi x (MAX + 1);

    x[0] = 0;

    for(int i = 1; i <= MAX; i++)
        x[i] = x[i - 1] ^ i;

    int t;

    cin >> t;

    while(t--){
        int a, b;

        cin >> a >> b;

        if(x[a - 1] == b)
            cout << a << "\n";
        else if((x[a - 1] ^ b) != a)
            cout << a + 1 << "\n";
        else if((x[a - 1] ^ b) == a)
            cout << a + 2 << "\n";
    }
    
    return 0;
}