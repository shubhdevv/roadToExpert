#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		map<int, int> cnt;
		int mx = 0;
		for (auto &it : a) {
			if (it % k == 0) continue;
			++cnt[k - it % k];
			mx = max(mx, cnt[k - it % k]);
		}
		long long ans = 0;
		for (auto [key, value] : cnt) {
			if (value == mx) {
				ans = k * 1ll * (value - 1) + key + 1;
			}
		}
		cout << ans << endl;
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