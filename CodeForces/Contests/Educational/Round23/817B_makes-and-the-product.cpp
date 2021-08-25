/*
    Luis Henrique Morelli
    817B - Makes And The Product
    https://codeforces.com/contest/817/problem/B
*/
    
#include <bits/stdc++.h>
    
#define MAX
    
using namespace std;
    
typedef long long ll;
typedef vector<ll> v;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    
    cin >> n;
    
    map<ll, ll> array;
    ll num;
    
    for(ll i = 0; i < n; i++){
        cin >> num;
    
        array[num]++;
    }
    
    vii set;
    ll count = 0;
        
    for(auto &it : array){
        count += it.second;
        set.push_back({it.first, it.second});
    
        if(count >= 3)
            break;
    }
    
    ll length = set.size(), result;
    
    if(length == 1)
        result = set[0].second * (set[0].second - 1) * (set[0].second - 2) / 6;
    else if(length == 2){
        if(set[0].second > 1)
            result = set[0].second * (set[0].second - 1) / 2 * set[1].second;
        else if(set[1].second > 1)
            result = set[1].second * (set[1].second - 1) / 2 * set[0].second;
    }
    else
        result = set[0].second * set[1].second * set[2].second;
    
    cout << result << "\n";
    
    return 0;
}