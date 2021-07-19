#include <bits/stdc++.h>

#define MAX 2000000

using namespace std;

typedef long l;
typedef long long ll;

vector<int> link, size;

void unite(int a, int b){
    if(size[a] < size[b])
        swap(a, b);

    size[a] += size[b];
    link[b] = a;
}

int find(int node){
    if(node == link[node])
        return node;

    return find(link[node]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    l n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        link.push_back(i);
        size.push_back(1);      
    }

    for(int i = 0; i < m; i++){
        int a, b;

        cin >> a >> b;

        a = find(a);
        b = find(b);

        if(a != b)
            unite(a, b);
    }

    int x = find(link[0]), roads = 0, y;

    for(int i = 1; i < n; i++){
        if((y = find(link[i])) != x){
            unite(x, y);
            roads++;

            x = find(y);
        }
    }

    cout << roads << "\n";

    return 0;
}