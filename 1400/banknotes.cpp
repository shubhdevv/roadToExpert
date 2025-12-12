#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
   int n, k;
    cin >> n >> k;
    k += 1;
    vector<int> a(n);
    for (int& x : a) {
      cin >> x;
      int cur = 1;
      while (x--) cur *= 10;
      x = cur;
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
      int cnt = k;
      if (i + 1 < n) cnt = min(cnt, a[i + 1] / a[i] - 1);
      res += a[i] * 1LL * cnt;
      k -= cnt;
    }
    cout << res << '\n';
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