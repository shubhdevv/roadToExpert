#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI 3.14159265358979323846

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> ans(n);

    int countOnes = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == '1') countOnes++;
    }
    bool notPos = false;
    if (countOnes == k) {
        notPos = true; 
    }
    for (int i = k; i < n ; i++) {
        if(!notPos) {
        if (s[i] == '1') countOnes++;
        if (s[i - k] == '1') countOnes--;
        }

        if (countOnes == k) {
            notPos = true;
        }
    }
    if (notPos) {
        cout << "NO\n";
        return;
    }
//yea
    cout << "YES\n";
    int l = 1, r = n;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            ans[i] = r;
            r--;
        } else {
            ans[i] = l;
            l++;
    }
}

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
     ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
