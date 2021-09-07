/*
    Luis Henrique Morelli
    573 - The Snail
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=514
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
    
    double h, u, f, d;

    while(cin >> h >> u >> d >> f){
        if(h == 0)
            break;

        double c = 0;
        int day = 1;

        f = u * f / 100;

        while(c <= h && c >= 0){
            c += u;

            if(c > h)
                break;

            c -= d;

            if(c < 0)
                break;

            u -= f;

            if(u < 0)
                u = 0;

            day++;
        }

        if(c < 0)
            cout << "failure on day " << day << "\n";
        else
            cout << "success on day " << day << "\n";
    }
    
    return 0;
}