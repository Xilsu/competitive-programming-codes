/*
    Luis Henrique Morelli
    792A - New Bus Route
    https://codeforces.com/contest/792/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    vector<int> cities(n);

    for(int i = 0; i < n; i++)
        cin >> cities[i];

    sort(cities.begin(), cities.end());

    int minDist = abs(cities[0] - cities[1]), count = 0;

    for(int i = 2; i < n; i++)
        minDist = min(minDist, abs(cities[i] - cities[i - 1]));

    for(int i = 1; i < n; i++)
        if(abs(cities[i] - cities[i - 1]) == minDist)
            count++;

    cout << minDist << " " << count << "\n";

    return 0;
}