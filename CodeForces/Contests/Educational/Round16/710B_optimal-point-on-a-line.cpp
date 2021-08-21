/*
    Luis Henrique Morelli
    710B - Optimal Point on a Line
    https://codeforces.com/contest/710/problem/B
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

    int array[n];

    for(int i = 0; i < n; i++)
        cin >> array[i];

    sort(array, array + n);

    if(n % 2 == 0)
        n--;

    cout << array[n / 2] << "\n";

    return 0;
}