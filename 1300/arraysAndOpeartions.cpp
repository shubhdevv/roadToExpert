#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    sort(a.rbegin(),a.rend());
    ll ans=0;
    for(int i=0;i<k;i++){
        ans+=a[i+k]/a[i];
    }
    for(int i=2*k;i<n;i++){
        ans+=a[i];
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