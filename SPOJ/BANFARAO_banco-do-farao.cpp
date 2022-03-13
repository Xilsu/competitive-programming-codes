#include <bits/stdc++.h>

#define MAX
#define MOD
#define INF 10000LL

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
    ll sum, maxsum, suffix, prefix, qtsum, qtmax, qtsuffix, qtprefix;

    Node() {
    }

    Node(const ll &a, const ll &b, const ll &c, const ll &d) {
        sum = a;
        maxsum = b;
        suffix = c;
        prefix = d;
        qtsum = 1LL;
        qtmax = 1LL;
        qtsuffix = 1LL;
        qtprefix = 1LL;
    }
};

struct SegTree {
    vector<Node> seg;

    SegTree() {
    }

    SegTree(const vi &arr, const ll &n) {
        seg = vector<Node>(4 * n);
        build(arr, 1, 1, n);
    }

    Node merge(Node a, Node b) {
        Node k;
        k.sum = a.sum + b.sum;
        k.maxsum = max({a.maxsum, b.maxsum, a.suffix + b.prefix});
        k.suffix = max(b.suffix, b.sum + a.suffix);
        k.prefix = max(a.prefix, a.sum + b.prefix);

        k.qtsum = a.qtsum + b.qtsum;

        if (a.maxsum > b.maxsum) {
            if (a.maxsum > a.suffix + b.prefix)
                k.qtmax = a.qtmax;
            else if (a.maxsum == a.suffix + b.prefix)
                k.qtmax = max(a.qtmax, a.qtsuffix + b.qtprefix);
            else
                k.qtmax = a.qtsuffix + b.qtprefix;
        } else if (b.maxsum > a.suffix + b.prefix) {
            if (b.maxsum > a.maxsum)
                k.qtmax = b.qtmax;
            else if (b.maxsum == a.maxsum)
                k.qtmax = max(b.qtmax, a.qtmax);
            else
                k.qtmax = a.qtmax;
        } else if (a.suffix + b.prefix > a.maxsum) {
            if (a.suffix + b.prefix > b.maxsum)
                k.qtmax = a.qtsuffix + b.qtprefix;
            else if (a.maxsum > a.suffix + b.prefix)
                k.qtmax = max(a.qtsuffix + b.qtprefix, b.qtmax);
            else
                k.qtmax = b.qtmax;
        } else
            k.qtmax = max({a.qtmax, b.qtmax, a.qtsuffix + b.qtprefix});

        if (b.suffix > b.sum + a.suffix)
            k.qtsuffix = b.qtsuffix;
        else if (b.sum + a.suffix > b.suffix)
            k.qtsuffix = b.qtsum + a.qtsuffix;
        else
            k.qtsuffix = max(b.qtsuffix, b.qtsum + a.qtsuffix);

        if (a.prefix > a.sum + b.prefix)
            k.qtprefix = a.qtprefix;
        else if (a.sum + b.prefix > a.prefix)
            k.qtprefix = a.qtsum + b.qtprefix;
        else
            k.qtprefix = max(a.qtprefix, a.qtsum + b.qtprefix);

        return k;
    }

    void build(const vi &arr, ll idx, ll start, ll end) {
        if (start == end) {
            seg[idx] = Node(arr[start], arr[start], arr[start], arr[start]);

            return;
        }

        ll mid = (start + end) / 2;

        build(arr, idx * 2, start, mid);
        build(arr, idx * 2 + 1, mid + 1, end);

        seg[idx] = merge(seg[idx * 2], seg[idx * 2 + 1]);
    }

    void update(ll idx, ll start, ll end, const ll &pos, const ll &val) {
        if (start == end) {
            seg[idx] = Node(val, val, val, val);

            return;
        }

        ll mid = (start + end) / 2;

        if (pos <= mid)
            update(idx * 2, start, mid, pos, val);
        else
            update(idx * 2 + 1, mid + 1, end, pos, val);

        seg[idx] = merge(seg[idx * 2], seg[idx * 2 + 1]);
    }

    Node query(ll idx, ll start, ll end, const ll &left, const ll &right) {
        if (left <= start && end <= right)
            return seg[idx];
        else if (start > right || end < left)
            return Node(-INF, -INF, -INF, -INF);

        ll mid = (start + end) / 2;

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

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vi arr(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        SegTree st(arr, n);
        ll q;
        cin >> q;

        while (q--) {
            ll l, r;
            Node q;
            cin >> l >> r;
            q = st.query(1, 1, n, l, r);
            cout << q.maxsum << " " << q.qtmax << "\n";
        }
    }

    return 0;
}
