#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     ll l, r;
    cin >> l >> r;

    ll pw = 1;
    ll ans = 0;
    while (pw < r)
        pw = (pw << 1) | 1;

    unordered_set<ll> s;
    for (ll i = l; i <= r; i++)
        s.insert(i);

    vector<ll> a(r + 1, 0);

    for (ll i = r; i >= l; i--) {
        while (s.find(pw - i) == s.end())
            pw >>= 1;
        a[i] = pw - i;
        ans += (i | a[i]);
        s.erase(pw - i);
    }

    cout << ans << "\n";
    for (ll i = l; i <= r; i++)
        cout << a[i] << " ";
    cout << "\n";
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