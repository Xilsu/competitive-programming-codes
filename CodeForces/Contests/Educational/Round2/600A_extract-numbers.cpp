/*
    Luis Henrique Morelli
    600A - Extract Numbers
    https://codeforces.com/contest/600/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string str;
 
    cin >> str;
 
    string num, alphanum;
    int n, i = 0;
 
    n = str.size();
 
    while(i < n){
        string aux;
        bool alpha = false;
 
        while(i < n && str[i] != ';' && str[i] != ','){
            aux += str[i];
 
            if(str[i] < '0' || str[i] > '9')
                alpha = true;
 
            ++i;
        }
 
        ++i;
 
        aux += ",";
 
        if(alpha || (aux.size() > 2 && aux[0] == '0') || aux == ",")
            alphanum += aux;
        else
            num += aux;
	}

	if(str[n - 1] == ',' || str[n - 1] == ';')
		alphanum += ",";
 
    if(num.empty())
        cout << (char) 45 << "\n";
    else{
        num.pop_back();
 
        cout << (char) 34 << num << (char) 34 << "\n";
    }
 
    if(alphanum.empty())
        cout << (char) 45 << "\n";
    else{
        alphanum.pop_back();
 
        cout << (char) 34 << alphanum << (char) 34 << "\n";
    }
        
    return 0;
}