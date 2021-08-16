/*
    Luis Henrique Morelli
    652B - z-sort
    https://codeforces.com/contest/652/problem/B
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

    int array[n];

    for(int i = 0; i < n; i++)
        cin >> array[i];

    sort(array, array + n);

    for(int i = 2; i < n; i += 2)
        swap(array[i], array[i - 1]);

    for(int i = 0; i < n; i++)
        cout << array[i] << " ";

    cout << "\n";
  
    return 0;
}