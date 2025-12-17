#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

const int MAXN = 2005;

int n, m1, m2;
int parent[2][MAXN];
vector<pair<int,int>> ans;

int find_set(int id, int x) {
    if (parent[id][x] == x) return x;
    return parent[id][x] = find_set(id, parent[id][x]);
}


void solve() {
    cin >> n >> m1 >> m2;
    for (int i = 1; i <= n; i++) {
        parent[0][i] = i;
        parent[1][i] = i;
    }
    for (int i = 0; i < m1; i++) {
        int u, v;
        cin >> u >> v;
        int fu = find_set(0, u);
        int fv = find_set(0, v);
        if (fu != fv)
            parent[0][fu] = fv;
    }
    for (int i = 0; i < m2; i++) {
        int u, v;
        cin >> u >> v;
        int fu = find_set(1, u);
        int fv = find_set(1, v);
        if (fu != fv)
            parent[1][fu] = fv;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (find_set(0, i) != find_set(0, j) &&
                find_set(1, i) != find_set(1, j)) {

                ans.push_back({i, j});
                parent[0][find_set(0, i)] = find_set(0, j);
                parent[1][find_set(1, i)] = find_set(1, j);
            }
        }
    }
    cout << ans.size() << '\n';
    for (auto &p : ans) {
        cout << p.first << " " << p.second << '\n';
    }
}

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);

            solve();
        return 0;
    }  