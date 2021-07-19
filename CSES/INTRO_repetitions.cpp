#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str;

    cin >> str;

    long longest, aux; 
    char letter;

    longest = aux = 1;
    letter = str[0];

    for(long i = 1; i < str.size(); i++){
        if(str[i] != letter){
            longest = max(longest, aux);

            letter = str[i];
            aux = 0;
        }
        
        aux++;
    }

    longest = max(longest, aux);

    cout << longest << "\n";

    return 0;
}