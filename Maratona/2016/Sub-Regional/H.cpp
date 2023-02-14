#include <bits/stdc++.h>

#define MAX
#define MOD
#define INF

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

bool not_vowel(char c) {
    return c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';
}

bool is_palindrome(string str) {
    int n = str.size();

    for (int i = 0; i <= n / 2; i++)
        if (str[i] != str[n - i - 1])
            return false;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str, aux;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
        if (!not_vowel(str[i]))
            aux += str[i];

    cout << (is_palindrome(aux) ? "S\n" : "N\n");

    return 0;
}
