#include <bits/stdc++.h>

#define MAX
#define MOD

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s, c, p;
        cin >> s >> c >> p;

        map<char, int> cost;

        for (int i = 0; i < int(c.size()); i++) {
            c[i] -= '0';

            if (!cost.count(s[i]))
                cost[s[i]] = c[i];
            else
                cost[s[i]] = min(cost[s[i]], (int)c[i]);
        }

        int ans = 0;
        bool f = true;

        for (int i = 0; i < int(p.size()) && f; i++) {
            if (!cost.count(p[i]))
                f = false;

            ans += cost[p[i]];
        }

        cout << (f ? ans : -1) << "\n";
    }

    return 0;
}
