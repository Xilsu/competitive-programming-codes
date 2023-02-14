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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, sum1, sum2, sum3;
    cin >> a >> b >> c;
    sum1 = a + b;
    sum2 = a + c;
    sum3 = b + c;

    if (a != b && b != c && a != c && a != sum3 && b != sum2 && c != sum1)
        cout << "N\n";
    else
        cout << "S\n";

    return 0;
}
