#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n; 
    cin>>n;
    vector<ll> v(n);
    for (auto &x : v) cin>>x;
    sort(v.begin(), v.end());

    int start = (n%2 == 0);
    ll ans = 0;
    for (int i = start; i < n; i += 2) ans += v[i];

    cout<<ans<<'\n';
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