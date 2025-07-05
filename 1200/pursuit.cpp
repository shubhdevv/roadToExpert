#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     ll n,on,m,x,sm=0,sy=0;
    cin>>n;
    on=n;
    ll index,index2;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        if(i==0)
        a[i]=a[i];
        else
        a[i]+=a[i-1];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        b[i]=b[i];
        else
        b[i]+=b[i-1];
    }
    x=n/4;
    x=n-x;
    ll y=x;
    x-=1;
    y-=1;
    sm=0;
    sy=0;
    if(sm+a[x]>=b[y])
    cout<<"0\n";
    else
    {
        while(sm+a[x]<b[y])
        {
            sm+=100;
            n++;
            if(n%4==0)
            {
                if(x!=0)
                x--;
                else
                {
                    a[0]=0;
                    x=0;
                }
            }
            else
            {
                if(y!=on-1)
                y++;
            }
        }
        cout<<n-on<<"\n";
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