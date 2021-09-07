/*
    Luis Henrique Morelli
    10114 - Loansome Car Buyer
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1055
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
    
    int m, dep;
    double downpay, loan;

    while(cin >> m >> downpay >> loan >> dep){
        if(m < 0)
            break;

        map<int, double> deprec;
        double dep;
        int depm;

        for(int i = 0; i < dep; i++){
            cin >> depm >> dep;

            deprec[depm] = dep;
        }

        double percent = deprec[0], val = (loan + downpay) * (1 - percent), parcel = loan / m;
        int j = 0, i;

        for(i = 1; i <= m && loan >= val; i++){
            if(deprec[i])
                percent = deprec[i];
        
            loan -= parcel;
            val *= (1 - percent);
        }

        i--;

        cout << i << (i == 1 ? " month\n" : " months\n");
    }
    
    return 0;
}