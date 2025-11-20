#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     priority_queue<pair<int, int>> q;
    int n;
    cin >> n;
    map<int, int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[x]++;
    }
    for (auto [x, y] : v) {
        q.push({y, x});
    }
    int sz = n;
    while (q.size() >= 2) {
        auto [cnt1, x1] = q.top();
        q.pop();
        auto [cnt2, x2] = q.top();
        q.pop();
        cnt1--;
        cnt2--;
        sz -= 2;
        if (cnt1) {
            q.push({cnt1, x1});
        }
        if (cnt2) {
            q.push({cnt2, x2});
        }
    }
    cout << sz << "\n";
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