/*
    Luis Henrique Morelli
    1251A - Broken Keyboard
    https://codeforces.com/contest/1251/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;

    cin >> t;

    while(t--){
        string s;

        cin >> s;

        set<char> functioningKeys;
        char prev = s[0];
        int count = 0;

        for(unsigned int i = 0; i < s.size(); i++){
            if(s[i] != prev){
                if(count % 2 != 0)
                    functioningKeys.insert(prev);
                
                prev = s[i];
                count = 1;
            }
            else
                count++;
        }

        if(count % 2 != 0)
            functioningKeys.insert(prev);
            
        for(auto& it:functioningKeys)
            cout << it;

        cout << "\n";
    }
        
    return 0;
}