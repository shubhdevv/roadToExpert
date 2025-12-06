#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
       int n, l, r;
       cin >> n >> l >> r;
        ll bval = (1LL << 28);
        vector<ll> a(n);
         for (int i = 0; i < l - 1; ++i) {
        a[i] = bval + (i + 1); 
    }
    ll k = 0;
    for (int i = l - 1; i < r - 1; ++i) {
        a[i] = bval + (i + 1);
        k ^= a[i];
    }
    a[r - 1] = k;
    ll aval = (1LL << 29); 
    for (int i = r; i < n; ++i) {
        a[i] = aval + (i + 1); 
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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