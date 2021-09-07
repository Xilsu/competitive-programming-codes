/*
    Luis Henrique Morelli
    920B - Tea Queue
    https://codeforces.com/contest/920/problem/B
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

    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        vii s (n);

        for(int i = 0; i < n; i++)
            cin >> s[i].first >> s[i].second;

        int sec = s[0].first;

        for(int i = 0; i < n; i++){
            if(s[i].second < sec)
                cout << "0 ";
            else{
                if(s[i].first > sec)
                    sec = s[i].first;

                cout << sec << " ";

                sec++;
            }
        }

        cout << "\n";
    }

    return 0;
}