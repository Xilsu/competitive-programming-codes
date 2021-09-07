/*
    Luis Henrique Morelli
    454 - Anagrams
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=395
*/

#include <bits/stdc++.h>

#define MAX

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool cmp(char a, char b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin >> t >> ws;

    while(t--){
        vector<string> w;
        string str;

        while(getline(cin, str) && str != "")
            w.push_back(str);

        sort(w.begin(), w.end());

        int n = w.size();
        vector<string> sorted (n);
        
        for(int i = 0; i < n; i++){
            string aux = w[i];

            sort(aux.begin(), aux.end(), cmp);

            while(aux.back() == ' ')
                aux.pop_back();

            sorted[i] = aux;
        }

        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                if(sorted[i] == sorted[j])
                    cout << w[i] <<  " = " << w[j] << "\n";

        if(t != 0)
            cout << "\n";
    }

    return 0;
}