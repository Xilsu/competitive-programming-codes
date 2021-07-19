/*
    Luis Henrique Morelli
    255A - Greg's Workout
    https://codeforces.com/contest/255/problem/A
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
 
    vector<int> exercises (3, 0);
    int index = 0;
 
    while(n--){
        int aux;
 
        cin >> aux;
 
        exercises[index] += aux;
 
        index++;
 
        if(index >= 3)
            index = 0;
    }
 
    int position = max_element(exercises.begin(), exercises.end()) - exercises.begin();
 
    if(position == 0)
        cout << "chest" << "\n";
    else if(position == 1)
        cout << "biceps" << "\n";
    else
        cout << "back" << "\n";
 
    return 0;
}