#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(10);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n + n - 1);
        for (int i = 0; i < 2 * n - 1; i++) {
            cin >> v[i];
        }

        string res = "";
        for (int i = 0; i < m; i++) {
            int x = 0;
            for (int j = 0; j < 2 * n - 1; j++) {
                x ^= v[j][i];
            }
            res += (char)x;
        }
        cout << res << '\n';
    }

    return 0;
}
