/*
    Luis Henrique Morelli
    75A - Life Without Zeros
    https://codeforces.com/contest/75/problem/A
*/

#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long int l;
typedef long long int ll;
 
int removeZeros(string number){
    int mult = 1, result = 0;
 
    for(int i = number.size() - 1; i >= 0; i--){
        if(number[i] != '0'){
            result += (number[i] - 48) * mult;
            mult *= 10;
        }
    }
 
    return result;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int a, b;
 
    cin >> a >> b;
 
    int sum = a + b;
 
    a = removeZeros(to_string(a));
    b = removeZeros(to_string(b));
    sum = removeZeros(to_string(sum));
 
    int result;
 
    result = sum;
    sum = a + b;
 
    if(result == sum)
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}