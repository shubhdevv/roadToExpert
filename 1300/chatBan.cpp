#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

ll calc(int x) {
    return x * 1ll * (x + 1) / 2;
}

void solve() {
     ll k, x;
      cin>>k>>x;
        ll lo = 1, hi = 2*k-1, ans = 2*k-1;
        while(lo <= hi){ 
            ll mid = (lo + hi) / 2;
            ll cnt;
            if(mid >= k){
                cnt = calc(k) + calc(k-1) - calc(2*k-1-mid);
            }
            else{
                cnt = calc(mid);
            }
            if(cnt >= x){ 
                ans = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        cout << ans << endl;
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