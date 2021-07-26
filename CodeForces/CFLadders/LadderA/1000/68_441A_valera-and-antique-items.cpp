/*
    Luis Henrique Morelli
    441A - Valera and Antique Items
    https://codeforces.com/problemset/problem/441/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, v;

    cin >> n >> v;

    set<int> outbids;
    int antiques, input;

    for(int i = 1; i <= n; i++){
        cin >> antiques;

        for(int j = 0; j < antiques; j++){
            cin >> input;

            if(input < v)
                outbids.insert(i);
        }
    }

    int numSellers = outbids.size();

    cout << numSellers << "\n";

    for(auto& it : outbids)
        cout << it << " ";

    cout << "\n";

    return 0;
}