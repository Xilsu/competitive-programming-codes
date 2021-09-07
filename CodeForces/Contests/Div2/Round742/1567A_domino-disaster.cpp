/*
    Luis Henrique Morelli
    1567A - Domino Disaster
    https://codeforces.com/contest/1567/problem/A
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
        string str;
        
        cin >> n >> ws >> str;

        for(int i = 0; i < n; i++){
            if(str[i] == 'D')
                str[i] = 'U';
            else if(str[i] == 'U')
                str[i] = 'D';
        }

        cout << str << "\n";
    }
    
    return 0;
}