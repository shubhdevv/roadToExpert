#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n,m;
    cin>>n>>m;
    ll s=n/2+m/2;
    multiset<ll>st;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(n%2&&m%2)
            {
                ll a=n/2;
                ll b=m/2;
                ll d=abs(a-i)+abs(b-j);
                st.insert(s+d);
            }
            else if(n%2==0&&m%2==0)
            {
                ll a1=n/2;
                ll a2=n/2-1;
                ll b1=m/2;
                ll b2=m/2-1;
                ll d=min((abs(a1-i)+abs(b1-j)),abs(a2-i)+abs(b2-j));
                d=min(d,(abs(a1-i)+abs(b2-j)));
                d=min(d,(abs(a2-i)+abs(b1-j)));
                st.insert(s+d);
            }
            else if(n%2==0)
            {
                ll a1=n/2;
                ll a2=n/2-1;
                ll b=m/2;
                ll d=min((abs(a1-i)+abs(b-j)),abs(a2-i)+abs(b-j));
                st.insert(s+d);
            }
            else if(m%2==0)
            {
                ll a=n/2;
                ll b1=m/2;
                ll b2=m/2-1;
                ll d=min((abs(a-i)+abs(b1-j)),abs(a-i)+abs(b2-j));
                st.insert(s+d);
            }
        }
    }
    for(auto &a:st)cout<<a<<" ";
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