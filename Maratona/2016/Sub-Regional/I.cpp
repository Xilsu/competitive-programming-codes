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

    int n;
    cin >> n;

    vi arr, left, right;
    arr = vi(n);
    left = vi(n, 1);
    right = vi(n, 1);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n - 1; i++) {
        left[i] += left[i - 1];

        if (left[i] > arr[i])
            left[i] = arr[i];

        right[n - i - 1] += right[n - i];

        if (right[n - i - 1] > arr[n - i - 1])
            right[n - i - 1] = arr[n - i - 1];
    }

    int ma;
    ma = 0;

    for (int i = 0; i < n; i++)
        ma = max(ma, min(left[i], right[i]));

    cout << ma << "\n";

    return 0;
}
