#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n, k;
		cin >> n >> k;
 
		string s;
		cin >> s;
 
		ll pref[n + 2];
		ll suf[n + 2];
 
		memset(pref, -1, sizeof(pref));
		memset(suf, -1, sizeof(suf));
 
		if (s[0] - '0' == 1) {
			pref[0] = 0;
		}
 
		if (s[n - 1] - '0' == 1) {
			suf[n - 1] = n - 1;
		}
 
		for (ll i = 1; i < n; i++) {
			if (s[i] - '0' == 1) {
				pref[i] = i;
			} else {
				pref[i] = pref[i - 1];
			}
		}
 
		for (ll i = n - 2; i >= 0; i--) {
			if (s[i] - '0' == 1) {
				suf[i] = i;
			} else {
				suf[i] = suf[i + 1];
			}
		}
 
 
		ll ans = 0;
		ll val1, val2;
 
		for (ll i = 0; i < n; i++) {
			val1 = val2 = INT_MAX;
			if (pref[i] != -1) {
				val1 = i - pref[i];
			}
			if (suf[i] != -1) {
				val2 = suf[i] - i;
			}
 
			if (min(val1, val2) > k) {
				ans++;
				pref[i] = i;
			}
			if (pref[i + 1] < pref[i])
				pref[i + 1] = pref[i];
		}
 
		cout << ans << "\n";
	
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