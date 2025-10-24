#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n, k;
        cin >> n >> k;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
        }
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            pref[i] = pref[i - 1] + freq[i];

        int ans = 1;
        for (int d = 1; d <= n; ++d) {
            int R = min(4 * d - 1, n);
            int total = pref[R];
            int good = 0;
            if (d <= R) good += freq[d];
            if (2 * d <= R) good += freq[2 * d];
            if (3 * d <= R) good += freq[3 * d];

            int bad = total - good;

            if (bad <= k)
                ans = d; 
        }

        cout << ans << "\n";
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