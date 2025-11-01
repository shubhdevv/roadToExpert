#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
		ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll ans[n+1]={0};
        if(n%2==0){
            ll k=n-1;
            for(ll i=0;i<n/2;i++){
                ans[k--] = a[n-1-i];
                ans[k--] = a[i];
            }
        }
        else{
            ll k=n-1;
            ans[0] = a[n/2];
            for(ll i=0;i<n/2;i++){
                ans[k--] = a[n-1-i];
                ans[k--] = a[i];
            }
        }
        for(ll i=0;i<n;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
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