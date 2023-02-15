#include <bits/stdc++.h>

#define MAX 10
#define MOD
#define INF
#define EPSILON
#define PI 3.141592653589793116

using namespace std;

typedef long long ll;
typedef __int128 bint;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef complex<long double> cp;

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
        string b1, b2, b3;
        cin >> b1 >> b2 >> b3;

        sort(begin(b1), end(b1));
        sort(begin(b2), end(b2));

        set<string> p1, p2;

        do {
            p1.insert(b1);
        } while (next_permutation(begin(b1), end(b1)));

        do {
            p2.insert(b2);
        } while (next_permutation(begin(b2), end(b2)));

        int zeros = 0, ones = 0;

        for(int i = 0; i < MAX; i++)
            b3[i] == '0' ? zeros++ : ones++;

        int ma = 0;

        for (auto str1 : p1) {
            for (auto str2 : p2) {
                int z = 0, o = 0, tot;

                for (int i = 0; i < MAX; i++)
                    str1[i] == str2[i] ? z++ : o++;

                tot = ones + o;
                tot = min(tot, MAX - max(0, tot - MAX));
                ma = max(ma, tot);           
            }
        }

        string ans;

        for(int i = 0; i < ma; i++)
            ans += '1';

        for(int i = ma; i < MAX; i++)
            ans += '0';

        cout << ans << "\n";
    }

    return 0;
}