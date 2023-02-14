#include <bits/stdc++.h>

#define MAX 1000
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
        int n;
        cin >> n;

        vi pos(MAX + 1);
        set<int> s;

        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            s.insert(a);
            pos[a] = i;
        }

        int ans = -1;

        for (auto i : s) {
            for (int j = 1; j <= MAX; j++) {
                if (pos[j] && __gcd(i, j) == 1)
                    ans = max(ans, pos[i] + pos[j]);
            }
        }
        
        cout << ans << "\n";
    }

    return 0;
}