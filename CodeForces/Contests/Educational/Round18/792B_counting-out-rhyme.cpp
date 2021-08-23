/*
    Luis Henrique Morelli
    792B - Counting-out Rhyme
    https://codeforces.com/contest/792/problem/B
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;

    cin >> n >> k;

    vector<int> children (n);

    for(int i = 1; i <= n; i++)
        children[i - 1] = i;

    int input, leader = 0;

    for(int i = 0; i < k; i++){
        cin >> input;

        leader = (leader + input) % n;

        cout << children[leader] << " ";

        children.erase(children.begin() + leader);
        n--;

        leader %= n;
    }

    cout << "\n";

    return 0;
}