#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

static const int MOD = 1000000007;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = *min_element(a.begin(), a.end());
    int cnt = 0;

    for (int x : a) {
        if (x == mn) cnt++;
        if ( (mn & x) != mn ) {
            cout << 0 << '\n';
            return;
        }
    }

    ll fact = 1;
    for (int i = 1; i <= n - 2; i++) {
        fact = (fact * i) % MOD;
    }

    ll ans = (1LL * cnt * (cnt - 1)) % MOD;
    ans = (ans * fact) % MOD;

    cout << ans << '\n';
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