#include <bits/stdc++.h>

#define MAX
#define MOD
#define INF INT_MAX

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
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
    int rank;

    Node() {
    }

    Node(int pos) {
        rank = pos;
    }
};

struct SegTree {
    vector<Node> seg;

    SegTree() {
    }

    SegTree(const vi &arr, const int &n) {
        seg = vector<Node>(4 * n);
        build(arr, 1, 1, n);
    }

    Node merge(Node a, Node b) {
        Node k;
        k.rank = min(a.rank, b.rank);

        return k;
    }

    void build(const vi &arr, int idx, int start, int end) {
        if (start == end) {
            seg[idx] = Node(arr[start]);

            return;
        }

        int mid = (start + end) / 2;

        build(arr, idx * 2, start, mid);
        build(arr, idx * 2 + 1, mid + 1, end);

        seg[idx] = merge(seg[idx * 2], seg[idx * 2 + 1]);
    }

    void update(int idx, int start, int end, const int &pos, const int &val) {
        if (start == end) {
            seg[idx] = Node(val);

            return;
        }

        int mid = (start + end) / 2;

        if (pos <= mid)
            update(idx * 2, start, mid, pos, val);
        else
            update(idx * 2 + 1, mid + 1, end, pos, val);

        seg[idx] = merge(seg[idx * 2], seg[idx * 2 + 1]);
    }

    Node query(int idx, int start, int end, const int &left, const int &right) {
        if (left <= start && end <= right)
            return seg[idx];
        else if (start > right || end < left)
            return Node(INF);

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

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<iii> ranking(n + 1);

        for (int i = 1; i <= n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            ranking[i] = tie(a, b, c);
        }

        sort(begin(ranking), end(ranking));

        int ans = 0;
        vi arr(n + 1, INF);
        SegTree st(arr, n);

        for(int i = 1; i <= n; i++){
            int a, b, c;
            Node q;
            tie(a, b, c) = ranking[i];
            
            st.update(1, 1, n, b, c);
            q = st.query(1, 1, n, 1, b);
            
            if(q.rank == c)
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
