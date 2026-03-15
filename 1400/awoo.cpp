#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin >> n;

    int p = 0, c = 0;
    bool fl = true;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        if (x < p || y < c || y - c > x - p) {
            fl = false;
        }

        p = x;
        c = y;
    }

    if (fl) cout << "YES\n";
    else cout << "NO\n";
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