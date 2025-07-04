#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
bool fun(vector<ll>v,ll n)
{
    vector<ll>s;
    s=v;
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++) {
        if(s[i]!=v[i])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n,xx;
    cin>>n>>xx;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    bool ok=true;
    if(xx==n)
    {
        if(fun(arr,n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(xx<=n/2) cout<<"YES"<<endl;
    else
    {
        ll x=n-xx;
        vector<ll>v;
        for(int i=0;i<x;i++)
        {
            v.push_back(arr[i]);
        }
        for(int i=n-1;i>=n-x;i--)
        {
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        vector<ll>vv;
        for(int i=0;i<v.size()/2;i++)
        vv.push_back(v[i]);
        for(int i=x;i<n-x;i++)
        vv.push_back(arr[i]);
        for(int i=v.size()/2;i<v.size();i++)
        vv.push_back(v[i]);
        if(fun(vv,n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
         int t=1;
         cin>>t;
         for(int i=1;i<=t;i++){
            solve();
        }
        return 0;
    }  