#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
 ll n;cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll s=0;
    for(ll i=0;i<n;i++)s+=a[i];
    ll m;cin>>m;
    while(m--){
        ll x,y;cin>>x>>y;
        ll ans=x+y;
        auto it=lower_bound(a.begin(),a.end(),x);
        if(it!=a.end()){
            ans=max(0LL,y-(s-*it));
        }
        if(it!=a.begin()){
            it--;
            ans=min(max(0LL,y-(s-*it))+(x-*it),ans);
        }
        cout<<ans<<endl;
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
            solve();
        return 0;
    }  