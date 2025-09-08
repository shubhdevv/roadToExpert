#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
        ll ans,e,n,s,i,l,r;
        cin>>n>>l>>r;
        vector<long long>a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        
        sort(a.begin(),a.end());
        ans=0;
        for(i=0;i<n-1;i++)
        {
             auto itr1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
             auto itr2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
             ans+=(itr2-itr1);
        }
        cout<<ans<<"\n";
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