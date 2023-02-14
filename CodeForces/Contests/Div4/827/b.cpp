#include <bits/stdc++.h>

#define MAX
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
        int n;
        cin >> n;

        bool f = true;
        set<int> s;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (s.count(a))
                f = false;

            s.insert(a);
        }

        cout << (f ? "YES\n" : "NO\n");
    }

    return 0;
}