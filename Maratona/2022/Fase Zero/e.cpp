#include <bits/stdc++.h>

#define MAX
#define MOD
#define INF
#define EPSILON

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef tuple<ll, ll, ll> iii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

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

    ll n, l, d;
    cin >> n >> l >> d;
    cout << fixed << setprecision(0) << l * ceil((n * d) / (l * 1000.)) << "\n";

    return 0;
}