#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin >> n;
    vector<int> s(n), u(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        s[i]--;                    
    }
    for (int i = 0; i < n; i++) cin >> u[i];
    vector<vector<int>> bst(n);
    for (int i = 0; i < n; i++) bst[s[i]].push_back(u[i]);
    for (int i = 0; i < n; i++)
        sort(bst[i].begin(), bst[i].end(), greater<int>());

    vector<vector<ll>> pr(n);
    for (int i = 0; i < n; i++) {
        pr[i].push_back(0);         
        for (int x : bst[i])
            pr[i].push_back(pr[i].back() + x);
    }
    vector<ll> ans(n, 0);
    for (int i = 0; i < n; i++) {
        int sz = bst[i].size();
        for (int k = 1; k <= sz; k++) {
            int take = (sz / k) * k; 
            ans[k - 1] += pr[i][take];
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";

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