/*
    Luis Henrique Morelli
    818B - Permutation Game
    https://codeforces.com/contest/818/problem/B
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
    
    int n, m;
    
    cin >> n >> m;
    
    vi steps (n + 1, 0);
    int leader, prev, a1;
    
    cin >> prev;
    
    for(int i = 1; i < m; i++){
        cin >> leader;
    
        if(prev >= leader)
            a1 = n - prev + leader;
        else
            a1 = leader - prev;
    
        if(steps[prev] != 0 && steps[prev] != a1){
            cout << "-1\n";
    
            return 0;
        }
    
        steps[prev] = a1;
        prev = leader;
    }
    
    set<int> repetition;
    
    for(int i = 1; i <= n; i++){
        if(steps[i] != 0 && repetition.count(steps[i])){
            cout << "-1\n";
    
            return 0;
        }
    
        repetition.insert(steps[i]);
    }
    
    vi needed;
    
    for(int i = 1; i <= n; i++)
        if(!repetition.count(i))
            needed.push_back(i);
    
    int length = needed.size() - 1;
    
    for(int i = 1; i <= n; i++){
        if(steps[i] != 0)
            cout << steps[i] << " ";
        else{
            cout << needed[length] << " ";
    
            length--;
        }
    }
    
    return 0;
}