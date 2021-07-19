/*
    Luis Henrique Morelli
    339A - Helpful Maths
    https://codeforces.com/contest/339/problem/A
*/

#include <bits/stdc++.h>

#define MAX 

using namespace std;

typedef long l;
typedef long long ll;
 
int main(){
	vector<int> coefs;
	string input;
 
	cin >> input;
 
	coefs.push_back(input[0] - 48);
 
	for(int i = 2; i < input.size(); i += 2)
		coefs.push_back(input[i] - 48);
 
	sort(coefs.begin(), coefs.end());
 
	cout << coefs[0];
 
	for(int i = 1; i < coefs.size(); i++)
		cout << "+" << coefs[i];
 
	return 0;
}