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

struct node {
    int ma;

    node(int ma = 0) {
        this->ma = ma;
    }
};

vector<node> st;
vi arr;

node merge(node l, node r) {
    return node(max({l.ma, r.ma}));
}

void build(int idx, int begin, int end) {
    if (begin == end) {
        st[idx] = node(arr[end]);
        return;
    }

    int mid, l, r;
    mid = (begin + end) >> 1;
    l = 2 * idx;
    r = l + 1;

    build(l, begin, mid);
    build(r, mid + 1, end);

    st[idx] = merge(st[l], st[r]);
}

node query(int idx, int begin, int end, const int &left, const int &right) {
    if (left <= begin && end <= right)
        return st[idx];
    else if (begin > right || end < left)
        return node();

    int mid, l, r;
    mid = (begin + end) >> 1;
    l = 2 * idx;
    r = l + 1;

    node q1, q2;
    q1 = query(l, begin, mid, left, right);
    q2 = query(r, mid + 1, end, left, right);

    return merge(q1, q2);
}

int bin_search(int idx, int begin, int end, const int &k) {
    if (begin == end)
        return end;
    else if (st[idx].ma < k)
        return -1;

    int mid, l, r;
    mid = (begin + end) >> 1;
    l = 2 * idx;
    r = l + 1;

    if (st[r].ma >= k)
        return bin_search(r, mid + 1, end, k);

    return bin_search(l, begin, mid, k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vii a(n + 2);
        a[0] = {0, 0};
        a[n + 1] = {m + 1, m + 1};

        for (int i = 1; i <= n; i++)
            cin >> a[i].first >> a[i].second;

        sort(begin(a), end(a));

        arr = vi(m + 1);

        for (int i = 1; i <= n + 1; i++) {
            int l, r;
            l = a[i - 1].second;
            r = a[i].first;
            arr[r - 1] = r - l - 1;
        }

        st = vector<node>(4 * m + 1);
        build(1, 1, m);

        while (q--) {
            int k, r;
            cin >> k;

            if (query(1, 1, m, 1, m).ma >= k) {
                r = bin_search(1, 1, m, k);
                cout << r - k + 1 << " " << r << "\n";
            } else
                cout << "-1 -1\n";
        }
    }

    return 0;
}