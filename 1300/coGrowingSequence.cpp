#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
      ll n;
        cin>>n;
        ll ar[n+3];
        for(int i=0;i<n;i++)cin>>ar[i];
        vector<ll>v;
        v.push_back(0);
        ll ans=ar[0];
        for(int i=1; i<n; i++)
        {
            ll x=ans;
            ll f=0;
            ll j=1;
            ll xx=ar[i];
            while(x)
            {
                ll z=(x&1);
                ll y=(ar[i]&1);
                if(z==1 && y==0)
                {
                    f+=j;
                }
                j*=2;
                x=(x>>1);
                ar[i]=(ar[i]>>1);
            }
            ans=xx^f;
            v.push_back(f);
        }
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
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