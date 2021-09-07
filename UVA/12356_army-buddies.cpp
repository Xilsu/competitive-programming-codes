/*
    Luis Henrique Morelli
    12356 - Army Buddies
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3778
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
    
    int S, B;

    while(cin >> S >> B){
        if(S == 0 && B == 0)
            break;

        vi left (S + 1), right (S + 1);

        for(int i = 1; i <= S; i++){
            left[i] = i - 1;
            right[i] = i + 1;
        }

        for(int i = 0; i < B; i++){
            int l, r;

            cin >> l >> r;

            left[right[r]] = left[l];
            right[left[l]] = right[r];

            string str1, str2;

            left[l] >= 1 ? str1 = to_string(left[l]) : str1 = "*";
            right[r] <= S ? str2 = to_string(right[r]) : str2 = "*";

            cout << str1 << " " << str2 << "\n";
        }

        cout << "-\n";
    }

    return 0;
}