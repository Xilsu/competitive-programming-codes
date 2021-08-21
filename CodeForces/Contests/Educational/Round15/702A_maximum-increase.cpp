/*
    Luis Henrique Morelli
    702A - Maximum Increase
    https://codeforces.com/contest/702/problem/A
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

    int longest = 0, length = 1;

    for(int i = 1; i < n; i++){
        if(array[i] <= array[i - 1]){
            longest = max(longest, length);
            length = 0;
        }

        length++;
    } 

    cout << max(longest, length) << "\n";
 
    return 0;
}