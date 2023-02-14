#include <bits/stdc++.h>

#define MAX 8
#define MOD
#define INF
#define EPSILON
#define PI 3.14159265358979323846

using namespace std;

typedef long long ll;
typedef __int128 bint;
typedef pair<ll, ll> ii;
typedef tuple<ll, ll, ll> iii;
typedef vector<ll> vi;
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
        vector<string> mat(MAX + 1);

        for (int i = 0; i < MAX; i++)
            cin >> mat[i];

        bool f = false;

        for (int i = 0; i < MAX && !f; i++) {
            int r = 0;

            for (int j = 0; j < MAX; j++) {
                if (mat[i][j] == 'R')
                    r++;
            }

            if (r == MAX) {
                cout << "R\n";
                f = true;
            }
        }

        if (!f)
            cout << "B\n";
    }

    return 0;
}