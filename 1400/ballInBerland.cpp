#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     int A, B, k;
  cin >> A >> B >> k;
  vector<int> a(A), b(B);
  vector<pair<int, int>> edges(k);
  for (auto &[x, y] : edges) {
    cin >> x;
  }
  for (auto &[x, y] : edges) {
    cin >> y;
  }
  for (auto &[x, y] : edges) {
    x--;
    y--;
    a[x]++;
    b[y]++;
  }
  ll ans = 0;
  for (auto &[x, y] : edges) {
    ans += k - a[x] - b[y] + 1;
  }
  cout << ans / 2 << "\n";
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