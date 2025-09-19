#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     ll w,h,x1,x2,y1,y2,a,b,wd,hd;
    ll r,rr;
    bool ch=true;
    vector<ll>vv,vv1;
    cin>>w>>h>>x1>>y1>>x2>>y2>>a>>b;
    wd=max(x1,x2)-min(x1,x2);
    hd=max(y1,y2)-min(y1,y2);
    if(wd+a<=w||hd+b<=h)
    {if(wd+a<=w)
    {
        if(a>x1)
        r=a-x1;
        else
        r=0;
        
        vv.push_back(r);
        x2=w-x2;
        if(a>x2)
        r=a-x2;
        else
        r=0;
        
        vv.push_back(r);
    }
    if(hd+b<=h)
    {
        if(b>y1)
        rr=b-y1;
        else rr=0;
        vv1.push_back(rr);
        y2=h-y2;
        if(b>y2)
        rr=b-y2;
        else rr=0;
        vv1.push_back(rr);
    }}
    else
    {
        cout<<"-1\n";
        ch=false;
    }
    if(ch==true)
    {
    sort(vv.begin(),vv.end());
    sort(vv1.begin(),vv1.end());
    if(vv.empty()==false&&vv1.empty()==false)
    cout<<min(vv[0],vv1[0])<<"\n";
    else if(vv.empty()==false&&vv1.empty()==true)
    cout<<vv[0]<<"\n";
    else if(vv.empty()==true&&vv1.empty()==false)
    cout<<vv1[0]<<"\n";
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