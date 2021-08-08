/*
    Luis Henrique Morelli
    869A - The Artful Expedient
    https://codeforces.com/problemset/problem/869/A
*/
 
#include <bits/stdc++.h>
 
#define MAX
 
using namespace std;
 
typedef long l;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n;

    cin >> n;

    vector<int> seq1, seq2, final;
    int input;

    for(int i = 0; i < n; i++){
        cin >> input;
        
        seq1.push_back(input);
        final.push_back(input);
    }
    
    for(int i = 0; i < n; i++){
        cin >> input;
        
        seq2.push_back(input);
        final.push_back(input);
    }

    sort(final.begin(), final.end());

    int sum = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(binary_search(final.begin(), final.end(), seq1[i] ^ seq2[j]))
                sum++;

    if(sum % 2 == 0)
        cout << "Karen\n";
    else
        cout << "Koyomi\n";

    return 0;
}