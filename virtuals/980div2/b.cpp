#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto& a : v) cin>>a;
     sort(v.begin(), v.end());
        ll cnt(0), prev(0);
        for(ll p = 0; p < n; p++){
            ll diff = v[p] - prev;
            prev = v[p];
            ll num = diff * (n - p);
            if(k <= num){cnt += k; break;}
            else{cnt += num + 1; k -= num;}
        }
        printf("%lld\n", cnt);
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