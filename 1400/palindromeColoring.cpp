#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     int n, k;
        string s;
        cin >> n >> k >> s;
        vector<int> cnt(26);
        for (char c : s) {
            cnt[c - 'a']++;
        }
        int cntPairs = 0, cntOdd = 0;
        for (int c : cnt) {
            cntPairs += c / 2;
            cntOdd += c % 2;
        }
        int ans = 2 * (cntPairs / k);
        cntOdd += 2 * (cntPairs % k);
        if (cntOdd >= k) {
            ans++;
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