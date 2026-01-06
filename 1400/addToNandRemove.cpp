#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  ll sum = 0;
  for (ll &x : a) {
    cin >> x;
    sum += x;
  }

  for (int i = n; i >= 1; i--) {
    if (sum % i == 0) {
      ll needSum = sum / i;
      ll curSum = 0;
      bool ok = true;
      for (int j = 0; j < n; j++) {
        curSum += a[j];
        if (curSum > needSum) {
          ok = false;
          break;
        } else if (curSum == needSum) {
          curSum = 0;
        }
      }

      if (ok) {
        cout << n - i << endl;
        return;
      }
    }
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