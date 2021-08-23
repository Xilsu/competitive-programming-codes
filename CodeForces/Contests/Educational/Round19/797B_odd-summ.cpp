/*
    Luis Henrique Morelli
    797B - Odd sum
    https://codeforces.com/contest/797/problem/B
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

    vector<int> odd;
    ll sum = 0;
    int input, minOdd = INT_MAX, maxOdd = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> input;

        if(input > 0){
            sum += input;

            if(input % 2 != 0)
                minOdd = min(minOdd, input);
        }   
        else if(input % 2 != 0)
            maxOdd = max(maxOdd, input);
    }

    if(sum % 2 == 0){
        if(maxOdd != INT_MIN)
            sum -= min(minOdd, -maxOdd);
        else
            sum -= minOdd;
    }

    cout << sum << "\n";

    return 0;
}