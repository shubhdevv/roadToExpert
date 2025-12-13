#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
        cin >> n;
        auto cmp = [](pii const &x, pii const &y) {
            return x > y;
        };
        set<pii, decltype(cmp)> a(cmp);
        vector<pii> answer;
        for (int i = 0; i < n; i++) {
            int ai;
            cin >> ai;
            if (ai > 0)
                a.emplace(ai, i + 1);
        }
        while (a.size() > 1) {
            auto p1 = *a.begin();
            a.erase(a.begin());
            auto p2 = *a.begin();
            a.erase(a.begin());
            answer.emplace_back(p1.second, p2.second);
            if (p1.first > 1) a.emplace(p1.first - 1, p1.second);
            if (p2.first > 1) a.emplace(p2.first - 1, p2.second);
        }
        cout << answer.size() << '\n';
        for (auto &p : answer) {
            cout << p.first << ' ' << p.second << '\n';
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