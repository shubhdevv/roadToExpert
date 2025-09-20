#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
      ll n, i, j, f, m;
      cin>>n;
        f=0;
        
        ll v[n+1];
        
        ll a[n];
        vector<ll> b, c;
        
        for(i=0; i<=n; i++)
        {
            v[i]=false;
        }
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=n){
                if(v[a[i]]==false)
                {
                    v[a[i]]=true;
                }else{
                    b.push_back(a[i]);
                }
            }else{
                b.push_back(a[i]);
            }
        }
        
        for(i=1; i<=n; i++)
        {
            if(v[i]==false){
                c.push_back(i);
            }
        }
        sort(b.begin(), b.end());
        
        m=b.size();
        
        for(i=0; i<m; i++)
        {
            if(2*c[i]>=b[i]){
                f++;
                break;
            }
        }
        
        if(f==0){
            cout<<m<<"\n";
        }else{
            cout<<"-1\n";
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