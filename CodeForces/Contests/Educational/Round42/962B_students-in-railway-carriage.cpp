/*
    Luis Henrique Morelli
    962B - Students in Railway Carriage
    https://codeforces.com/contest/962/problem/B
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

    int n, a , b;
    string s;

    cin >> n >> a >> b >> ws >> s;

    if(b > a)
        swap(a, b);

    int count = 0;

    if(s[0] == '.'){
        s[0] = 'a';
        
        a--;
        count++;
    }

    for(int i = 1; i < n; i++){
       if(s[i - 1] == '*' && b > a)
            swap(a, b);
       if(a && s[i - 1] != 'a' && s[i] == '.'){    
            s[i] = 'a';
            
            a--;
            count++;
        }
        else if(b && s[i - 1] != 'b' && s[i] == '.'){
            s[i] = 'b';

            b--;
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}