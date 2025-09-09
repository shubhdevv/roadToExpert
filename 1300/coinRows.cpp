#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n,sum=0,m=LONG_LONG_MAX,index=-1;
    cin>>n;
    vector<ll>v(n);
    vector<ll>w(n);
    vector<ll>vs(n);
    vector<ll>ws(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
        vs[i]=sum;
    }
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    if(n==1)
    cout<<"0\n";
    else
    {sum=0;
    for(int i=n-1;i>=0;i--) {
        sum+=w[i];
        ws[i]=sum;
    }
    for(int i=0;i<n;i++) {
        if(max(ws[0]-ws[i],vs[n-1]-vs[i])<m)
        {
            m=max(ws[0]-ws[i],vs[n-1]-vs[i]);
            index=i;
        }
    }
    cout<<m<<"\n";}
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