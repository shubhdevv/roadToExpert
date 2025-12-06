#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    string s, t;
     cin >> s >> t;
        vector<int> cnt(26, 0);
        for (char ch : t) cnt[ch - 'a']++;
        bool ok = true;
        for (char ch : s) {
            if (--cnt[ch - 'a'] < 0) {
                ok = false;
            }
        }
        if (!ok) {
            cout << "Impossible\n";
            return;
        }
        string rem;
        rem.reserve(t.size() - s.size());
        for (int c = 0; c < 26; ++c) {
            rem.append(cnt[c], char('a' + c));
        }
        string ans;
        ans.reserve(t.size());
        int i = 0, j = 0;
        while (i < (int)rem.size() && j < (int)s.size()) {
            if (rem[i] < s[j]) {
                ans.push_back(rem[i++]);
            } else  ans.push_back(s[j++]);
        }
        while (i < (int)rem.size()) ans.push_back(rem[i++]);
        while (j < (int)s.size()) ans.push_back(s[j++]);
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