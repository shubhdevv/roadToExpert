#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

const int N = 2e5 + 10;
vector<vector<int>> pfac(N + 1);

void solve() {
     int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    int ans = 2;
    map<int, int> cnt;
    for (int i = 0; i < n; i++){
        for (int x : pfac[a[i]]){
            if (cnt[x] > 0)
                ans = 0;
            cnt[x]++;
        }
    }

    for (int i = 0; i < n; i++){
        for (int x : pfac[a[i]])
            cnt[x]--;

        for (int x : pfac[a[i] + 1]){
            if (cnt[x] > 0)
                ans= min(ans, 1);
        }

        for (int x : pfac[a[i]])
            cnt[x]++;
    }
    cout << ans << "\n";
}

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
        for (int i = 2; i <= N; i++){
        if (!pfac[i].empty())
            continue;

        for (int j = i; j <= N; j += i)
            pfac[j].push_back(i);
    }
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
         int t=1;
         cin>>t;
         for(int i=1;i<=t;i++){
            solve();
        }
        return 0;
    }  