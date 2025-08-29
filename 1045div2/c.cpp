#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     int n;
        cin >> n;
        vector<ll> v(n+2, 0);
        for (int i = 1; i <= n; i++) cin >> v[i];
        vector<ll> dp(n + 2, 0);
        ll rem = 0;
        for (int i = 1; i <= n; i += 2) rem += v[i];
        for (int i = (n % 2 ? n : n - 1); i >= 1; i -= 2) {
            ll ub1 = v[i];
            ll ub2 = (i > 1 ? v[i - 1] : LLONG_MAX);
            ll ub3 = (i < n ? v[i + 1] - dp[i + 2] : LLONG_MAX);
            dp[i] = min({ub1, ub2, ub3});
            if (dp[i] < 0) dp[i] = 0;
        }
        ll orig = 0;
        for (int i = 1; i <= n; i += 2) orig += dp[i];
        cout << rem - orig << "\n";
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