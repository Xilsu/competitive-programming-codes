/*
    Luis Henrique Morelli
    660A - Co-prime Array
    https://codeforces.com/contest/660/problem/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;

int gcd(int a, int b){
    if(b == 0)
        return a;

    return gcd(b, a % b);
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;

    cin >> n;

    vector<int> array;
    int k = 0, input;

    cin >> input;

    array.push_back(input);

    for(int i = 1; i < n; i++){
        cin >> input;

        if(gcd(input, array[i + k - 1]) != 1){
            array.push_back(1);

            k++;
        }
        
        array.push_back(input);
    }

    cout << k << "\n";

    for(int i = 0; i < n + k; i++)
        cout << array[i] << " ";

    cout << "\n";

    return 0;
}