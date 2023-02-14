#include <bits/stdc++.h>

#define MAX
#define MOD
#define INF
#define EPSILON
#define PI 3.14159265358979323846

using namespace std;

typedef long long ll;
typedef __int128 bint;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef complex<double> cd;

void set_io(string s) {
    if (!s.empty()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    set_io("");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
            cout << "YES\n";
        else if (c + b == a)
            cout << "YES\n";
        else if (a + c == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}