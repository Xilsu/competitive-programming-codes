/*
    Luis Henrique Morelli
    1000A - Codehorses T-shirts
    https://codeforces.com/contest/1000/problem/A
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool cmp(string a, string b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;

    cin >> n >> ws;

    set<string> shirts = {"L", "M", "S", "XL", "XS", "XXL", "XXS", "XXXL", "XXXS"};
    map<string, int> prev, cur;
    string str;

    for(int i = 0; i < n; i++){
        cin >> str;
        prev[str]++;
    }

    for(int i = 0; i < n; i++){
        cin >> str;
        cur[str]++;
    }

    int count = 0;

    for(auto &it : shirts)
        count += abs(cur[it] - max(prev[it], cur[it]));

    cout << count << "\n";

    return 0;
}