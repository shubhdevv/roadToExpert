#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n;cin>>n;
    vector<pair<ll,ll>> power(n);
    for(int i=0;i<n;i++){
        ll x;cin>>x;vector<ll> p(x);
        ll mxp=-1;;
        for(int j=0;j<x;j++) {
            cin>>p[j];
           mxp=max(mxp,p[j]-j+1);
        }
        power[i]={mxp,x};
    }
    sort(power.begin(),power.end());
    ll l=power[0].first,r=power[n-1].first;
    ll ans=1e12;
    while(l<=r){
        ll mid=(l+r)/2;ll curr=mid;
        bool ok=1;
        for(int i=0;i<n;i++){
            if(curr>=power[i].first){
                curr+=power[i].second;
            }
            else{
                ok=0;break;
            }
        }
        if(ok){
            ans=mid;r=mid-1;
        }
        else l=mid+1;
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