#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     string s;
    cin >> s;
    vector<vector<int>> lst(2, vector<int>(2, -1));
    long long ans = 0;
    for (int i = 0; i < int(s.size()); ++i) {
      int j = i - 1;
      int p = i & 1;
      if (s[i] != '1') j = min(j, max(lst[0][p ^ 1], lst[1][p]));
      if (s[i] != '0') j = min(j, max(lst[0][p], lst[1][p ^ 1]));
      ans += i - j;
      if (s[i] != '?') lst[s[i] - '0'][p] = i;
    }
    cout << ans << '\n';
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