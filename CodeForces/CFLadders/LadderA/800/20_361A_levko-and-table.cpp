/*
    Luis Henrique Morelli
    361A - Levko and Table
    https://codeforces.com/contest/361/problem/A
*/

#include <bits/stdc++.h>

#define MAX 

using namespace std;

typedef long l;
typedef long long ll;
 
int main(){
	int n, k;
 
	cin >> n >> k;
 
	for(int i = 0; i < n; i++){
		if(i == 0)
			cout << k;
		else
			cout << 0;
		
		for(int j = 1; j < n; j++){
			if(i == j)
				cout << " " <<k;
			else
				cout << " " << 0;
		}
 
		cout << "\n";
	}
 
	return 0;
}