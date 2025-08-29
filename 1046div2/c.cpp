#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(auto& a : v) cin>>a;
    vector<int> dp(n+1,0), last(n+1,0);
    int ans = 0;
    for(int i=1;i<=n;i++) {
     int val = v[i];
     if(last[val] >= val) {
        dp[i] = dp[i-val] + val;
     }
     else dp[i] = dp[i-1];
    last[val]++;
    ans = max(ans,dp[i]);
    }
    cout<<ans<<endl;
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