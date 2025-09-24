#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
            ll n,k;
            cin>>n>>k;
            vector<ll>a(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            ll l=0,r=1e14;
            while(l<r){
                ll mid=(l+r)/2;
                ll sum=a[0]+mid;
                bool ok=true;
                for(int i=1;i<n;i++){
                    ll x=sum*k/100;
                    if(a[i]>x){
                        ok=false;
                        break;
                    }
                    sum+=a[i];
                }
                if(ok) r=mid;
                else l=mid+1;
            }
            cout<<l<<"\n";
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