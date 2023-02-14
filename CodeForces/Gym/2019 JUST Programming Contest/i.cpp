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
        int n, k;
        cin >> n >> k;

        int mi = 100;
        ll sum = 0;
        priority_queue<int> pq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mi = min(mi, abs(x));

            if (x > 0)
                sum += x;
            else
                pq.push(-x);
        }

        while (!pq.empty()) {
            int x;

            if (k) {
                x = pq.top();
                k--;
            } else {
                x = -pq.top();
            }

            sum += x;
            pq.pop();
        }

        cout << sum - (k % 2 ? 2 * mi : 0) << "\n";
    }

    return 0;
}
