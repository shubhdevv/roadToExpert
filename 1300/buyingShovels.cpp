#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     ll n,k;
     cin>>n>>k;
     if(k>=n)  cout<<"1"<<endl;
     else {
        ll max=1;
        for(ll i=1;i<=sqrt(n);i++) {
             if(n%i==0) {
                if(n/i>max&&(n/i)<=k)  max=n/i;
                if(i>max&&i<=k) max=i;
                     }
                 }
                 cout<<n/max<<endl;
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