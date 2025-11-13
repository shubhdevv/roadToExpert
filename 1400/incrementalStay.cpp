#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     ll n; cin >> n;
        vector<ll> v;
        for (ll i = 0; i < 2 * n; i++) {
            ll x; cin >> x; v.push_back(x);
        }
        vector<ll> ans(n + 3, 0);
        for (ll i = 0; i < 2 * n; i += 2) ans[1] -= v[i];
        for (ll i = 1; i < 2 * n; i += 2) {
            ans[1] += v[i]; ans[2] -= v[i];
        }
        for (ll i = 2; i < 2 * n; i += 2) ans[2] += v[i];
        ans[2] += 2 * v.back() - v[0];
        for (ll i = 3; i <= n; i++) {
            ans[i] = ans[i - 2] + 2 * (v[(ll)v.size() - i + 1] - v[i - 2]);
        }
        for (ll i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << endl;
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