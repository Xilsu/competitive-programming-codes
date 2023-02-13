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

        int words = 1;

        for(int i = 1; i < int(str.size()); i++){
            if(str[i] >= 'A' && str[i] <= 'Z')
                words++;
        }

        cout << (words <= 7 ? "YES\n" : "NO\n");
    }

    return 0;
}
