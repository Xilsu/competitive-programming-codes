#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<char, long> alfabet;
    string str;
    char aux;

    while(cin >> aux){
        str.push_back(aux);
        
        if(alfabet.count(aux)){
            alfabet[aux]++;
        }
        else{
            alfabet.insert({aux, 1});
        }
    }

    string str1, str2;
    bool flag = false;

    for(auto it = alfabet.begin(); it != alfabet.end(); it++){
        if(it->second % 2 != 0){
            if(flag == true){
                cout << "NO SOLUTION\n";

                return 0;
            }

            str2.append(it->second, it->first);

            flag = true;
        }
        else{
            str1.append(it->second / 2, it->first);
        }
    }
    
    cout << str1 << str2;

    reverse(str1.begin(), str1.end());

    cout << str1 << "\n";

    return 0;
}