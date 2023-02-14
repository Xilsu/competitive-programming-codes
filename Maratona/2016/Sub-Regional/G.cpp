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

void set_io(string s) {
    if (!s.empty()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    // set_io("");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p;
    cin >> n >> p;

    vector<vi> black, white;
    black = vector<vi>(n + 1, vi(n + 1));
    white = vector<vi>(n + 1, vi(n + 1));

    for (int i = 0; i < p; i++) {
        int l, c;
        cin >> l >> c;
        black[l][c] = 1;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            black[i][j] = black[i][j] + black[i - 1][j] + black[i][j - 1] - black[i - 1][j - 1];

    for (int i = 0; i < p; i++) {
        int l, c;
        cin >> l >> c;
        white[l][c] = 1;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            white[i][j] = white[i][j] + white[i - 1][j] + white[i][j - 1] - white[i - 1][j - 1];

    int b, w;
    b = 0;
    w = 0;

    for (int k = 1; k <= n; k++) {
        for (int i = k; i <= n; i++) {
            for (int j = k; j <= n; j++) {
                int prefix1, prefix2;
                prefix1 = black[i][j] - black[i - k][j] - black[i][j - k] + black[i - k][j - k];
                prefix2 = white[i][j] - white[i - k][j] - white[i][j - k] + white[i - k][j - k];

                if (prefix1 && !prefix2)
                    b++;
                else if (prefix2 && !prefix1)
                    w++;
            }
        }
    }

    cout << b << " " << w << "\n";

    return 0;
}
