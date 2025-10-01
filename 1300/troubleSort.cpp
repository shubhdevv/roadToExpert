#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n;
		cin >> n;
		vector<pair<ll, ll>>v(n + 1);
		for (ll i = 1; i <= n; i++) {
			ll val;
			cin >> val;
			v[i].first = val;
		}
		for (ll j = 1; j <= n; j++) {
			ll val;
			cin >> val;
 
			v[j].second = val;
		}
		ll all_1 = 1;
		for (ll j = 1; j <= n; j++) {
			if (v[j].second == 0) {
				all_1 = 0;
			}
		}
		ll all_0 = 1;
		for (ll j = 1; j <= n; j++) {
			if (v[j].second == 1) {
				all_0 = 0;
			}
		}
		ll flag_sorted = 1;
		for (ll i = 1; i < n; i++) {
			if (v[i].first > v[i + 1].first) {
				flag_sorted = 0;
			}
		}
		if (flag_sorted == 1) {
			cout << "Yes" << "\n";
		} else {
			if (all_1 == 1 || all_0 == 1) {
				cout << "No" << "\n";
			} else {
				cout << "Yes" << "\n";
			}
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
         int t=1;
         cin>>t;
         for(int i=1;i<=t;i++){
            solve();
        }
        return 0;
    }  