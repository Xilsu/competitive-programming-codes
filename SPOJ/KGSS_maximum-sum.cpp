#include <bits/stdc++.h>

#define MAX
#define MOD

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef tuple<ll, ll, ll> iii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;

void set_IO(string s) {
    if (s.empty()) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    } else {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

struct Node {
    int max1, max2;

    Node() {
    }

    Node(int a, int b) {
        max1 = a;
        max2 = b;
    }
};

struct SegTree {
    int n;
    vector<Node> seg;

    SegTree() {
    }

    SegTree(vi &arr, int &n) {
        this->n = n;
        seg = vector<Node>(4 * n);
        build(arr, 1, 1, n);
    }

    Node merge(Node a, Node b) {
        vi maximums = {a.max1, a.max2,
                       b.max1, b.max2};
        Node k;

        sort(begin(maximums), end(maximums));

        k.max1 = maximums[3];
        k.max2 = maximums[2];

        return k;
    }

    void build(vi &arr, int idx, int start, int end) {
        if (start == end) {
            seg[idx].max1 = arr[start];
            seg[idx].max2 = 0;

            return;
        }

        int mid = (start + end) / 2;

        build(arr, idx * 2, start, mid);
        build(arr, idx * 2 + 1, mid + 1, end);

        seg[idx] = merge(seg[idx * 2], seg[idx * 2 + 1]);
    }

    void update(int idx, int start, int end, int &pos, int &val) {
        if (start == end) {
            seg[idx].max1 = val;
            seg[idx].max2 = 0;

            return;
        }

        int mid = (start + end) / 2;

        if (pos <= mid)
            update(idx * 2, start, mid, pos, val);
        else
            update(idx * 2 + 1, mid + 1, end, pos, val);

        seg[idx] = merge(seg[idx * 2], seg[idx * 2 + 1]);
    }

    Node query(int idx, int start, int end, int left, int right) {
        if (left <= start && end <= right)
            return seg[idx];
        else if (start > right || end < left)
            return Node(0, 0);

        int mid = (start + end) / 2;

        Node q1, q2;
        q1 = query(idx * 2, start, mid, left, right);
        q2 = query(idx * 2 + 1, mid + 1, end, left, right);

        return merge(q1, q2);
    }
};

int main() {
    // set_IO("");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vi arr;
    cin >> n;
    arr = vi(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int q;
    SegTree st(arr, n);
    cin >> q;

    while (q--) {
        char op;
        int l, r;
        cin >> op >> l >> r;

        if (op == 'Q') {
            Node ans = st.query(1, 1, n, l, r);
            cout << ans.max1 + ans.max2 << "\n";
        } else
            st.update(1, 1, n, l, r);
    }

    return 0;
}
