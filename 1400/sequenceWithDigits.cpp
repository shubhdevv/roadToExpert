#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

ll getAdd(ll x) {
    ll mn = 10, mx = 0;
    while (x > 0) {
        ll d = x % 10;
        x /= 10;
        mn = min(mn, d);
        mx = max(mx, d);
    }
    return mn * mx;
}


void solve() {
     ll x, k;
        cin >> x >> k;
        k--;  
        while (k--) {
            ll add = getAdd(x);
            if (add == 0) break;
            x += add;
        }
        cout << x << '\n';
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