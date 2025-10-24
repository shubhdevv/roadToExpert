#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<ll> a(q);
        for (int i = 0; i < q; i++) cin >> a[i];
        if (s.find('B') == string::npos) {
            for (ll x : a) cout << x << ' ';
            cout << '\n';
            return;
        }
        vector<int> run(n, 0);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                int cnt = 0, j = i;
                while (s[j] == 'A') {
                    cnt++;
                    j = (j + 1) % n;
                    if (s[j] == 'B') break;
                }
                run[i] = cnt;
            }
        }
        for (ll x : a) {
            ll steps = 0;
            int pos = 0;
            while (x > 0) {
                if (s[pos] == 'A') {
                    ll consume = min<ll>(run[pos], x);
                    x -= consume;
                    steps += consume;
                    pos = (pos + consume) % n;
                    if (x == 0) break;
                }
                if (s[pos] == 'B') {
                    x /= 2;
                    steps++;
                    pos = (pos + 1) % n;
                }
            }
            cout << steps << ' ';
        }
        cout << '\n';
}

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
         int t=1;
         cin>>t;
         for(int i=1;i<=t;i++){
            solve();
        }
        return 0;
    }  