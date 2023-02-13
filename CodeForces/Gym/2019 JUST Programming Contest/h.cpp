#include <bits/stdc++.h>

#define MAX
#define MOD

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        char c = str[0];
        bool f = true;

        for(int i = 0; i < int(str.size()) && f; i++, c++){
            if(c > 'z')
                c = 'a';

            if(str[i] != c)
                f = false;
        }

        cout << (f ? "YES\n" : "NO\n");
    }

    return 0;
}
