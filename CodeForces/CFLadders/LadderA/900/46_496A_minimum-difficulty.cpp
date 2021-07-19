/*
    Luis Henrique Morelli
    496A - Minimum Difficulty
    https://codeforces.com/contest/496/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
 
    cin >> n;
 
    vector<int> heights;
    int input;
 
    for(int i = 0; i < n; i++){
        cin >> input;
 
        heights.push_back(input);
    }
 
    int minPossible = INT_MAX;
    unsigned int size = heights.size();
 
    for(unsigned int i = 1; i < size - 1; i++){
        int difficulty = 0;
        
        for(unsigned int j = 0; j < size - 1; j++){
            if(j == i)
                continue;
            
            unsigned int next = j + 1;
 
            if(next == i)
                next++;
            
            difficulty = max(difficulty, heights[next] - heights[j]);
        }
 
        minPossible = min(minPossible, difficulty);
    }
 
    cout << minPossible << "\n";
 
    return 0;
}