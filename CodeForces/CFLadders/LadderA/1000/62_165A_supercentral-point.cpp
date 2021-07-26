/*
    Luis Henrique Morelli
    165A - Supercentral Point
    https://codeforces.com/problemset/problem/165/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int isSupercentral(vector<pair<int, int>> xy, int index, int n){
    bool right = false, left = false, lower = false, upper = false;

    for(int i = 0; i < n; i++){
        if(i == index)
            continue;
        else if(xy[i].first == xy[index].first){
            if(xy[i].second > xy[index].second)
                upper = true;
            else if(xy[i].second < xy[index].second)
                lower = true;
        }
        else if(xy[i].second == xy[index].second){
            if(xy[i].first > xy[index].first)
                right = true;
            else if(xy[i].first < xy[index].first)
                left = true;
        }
    }

    return (right && left && lower && upper);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;

    cin >> n;

    vector<pair<int, int>> xy (n);

    for(int i = 0; i < n; i++)
        cin >> xy[i].first >> xy[i].second;

    int count = 0;

    for(int i = 0; i < n; i++)
        count += isSupercentral(xy, i, n);

    cout << count << "\n";

    return 0;
}