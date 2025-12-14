#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

bool win(int pos,vector<ll>& a) {
    ll power = a[pos];
    int n = a.size();
    for (int i = 0; i < n; i++) {
        if (i == pos) continue;
        if (power < a[i]) return false;
        power += a[i];
    }
    return true;
}
void solve() {
     int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    int l = -1, r = n - 1;
    while (r - l > 1) {
        int m = (l + r) / 2;
        if (win(m, a))
            r = m;
        else
            l = m;
    }
    vector<int> winIds;
    for (int i = 0; i < n; i++) {
        if (b[i] >= a[r]) {
            winIds.push_back(i + 1); 
        }
    }
    cout << winIds.size() << '\n';
    for (int id : winIds) cout << id << ' ';
    cout << '\n';
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