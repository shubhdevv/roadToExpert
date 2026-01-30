#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin >> n;
    vector<int> pos(2 * n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }
    const int INF = 1e9;
    int l = INF;  
    int ans = INF;
    for (int i = 2 * n; i >= 1; i--) {
        if (i % 2 == 0) {
            l = min(l, pos[i]);
        } else {
            if (l != INF) {
                ans = min(ans, pos[i] + l - 2);
            }
        }
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