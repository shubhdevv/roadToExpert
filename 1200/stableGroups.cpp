#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     int n;
    long long k, x;
    cin >> n >> k >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    vector<long long> b;
    int groups = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > x) {
            long long diff = a[i] - a[i - 1];
            long long t = diff / x;
            if (diff % x == 0) t--;
            b.push_back(t);
            groups++;
        }
    }

    sort(b.begin(), b.end());
    int fill = 0;
    for (size_t i = 0; i < b.size(); i++) {
        if (k >= b[i]) {
            k -= b[i];
            fill++;
        }
    }
    cout << (groups - fill) << '\n';
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