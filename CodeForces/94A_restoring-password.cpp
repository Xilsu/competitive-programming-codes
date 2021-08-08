/*
    Luis Henrique Morelli
    94A - Restoring Password
    https://codeforces.com/problemset/problem/94/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	string binCode;

    cin >> binCode;

    string cryptography[10];

    for(int i = 0; i < 10; i++)
        cin >> cryptography[i];
        
    string answer = "";

    for(int i = 0; i < 80; i += 10){
        string aux = binCode.substr(i, 10);

        for(int i = 0; i < 10; i++){
            if(aux == cryptography[i]){
                answer += i + 48;

                break;
            }
        }
    }

    cout << answer << "\n";

    return 0;
}