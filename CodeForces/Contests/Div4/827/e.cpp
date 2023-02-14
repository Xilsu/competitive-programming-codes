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
        int n, q;
        cin >> n >> q;

        vector<ll> prefix(n + 1), ma(n);

        for (int i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            prefix[i] = x + prefix[i - 1];
            ma[i - 1] = x;

            if (i != 1)
                ma[i - 1] = max(ma[i - 1], ma[i - 2]);
        }

        for (int i = 0; i < q; i++) {
            int pos;
            ll k;
            cin >> k;
            pos = upper_bound(begin(ma), end(ma), k) - begin(ma);
            cout << prefix[pos] << " ";
        }

        cout << "\n";
    }

    return 0;
}