/*
    Luis Henrique Morelli
    961B - Lecture Sleep
    https://codeforces.com/contest/961/problem/B
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

    vi a (n + 1), t (n + 1);

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    vi ans (n + 1);
    int sum = 0;

    ans[0] = 0;

    for(int i = 1; i <= n; i++){
        cin >> t[i];
        
        ans[i] = ans[i - 1];

        if(t[i])
            sum += a[i];
        else
            ans[i] += a[i];
    }

    int technique = 0;

    for(int i = k; i <= n; i++)
        technique = max(technique, ans[i] - ans[i - k]);

    cout << sum + technique << "\n";

    return 0;
}