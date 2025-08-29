#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<int,int> freq;
        for (int x : a) freq[x]++;

        int ans = 0;
        for (auto &[val, cnt] : freq) {
            ans += (cnt / val) * val; // full blocks of size 'val'
        }

        cout << ans << "\n";
    }

    return 0;
}
