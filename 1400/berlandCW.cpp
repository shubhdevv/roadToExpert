#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n, U, R, D, L;
    cin >> n >> U >> R >> D >> L;

    for (int mask = 0; mask < 16; mask++) {
        int rU = U, rR = R, rD = D, rL = L;

        if (mask & 1) {
            rU--;
            rL--;
        }
        if (mask & 2) {
            rL--;
            rD--;
        }
        if (mask & 4) {
            rD--;
            rR--;
        }
        if (mask & 8) {
            rR--;
            rU--;
        }

        if (min({rU, rR, rD, rL}) >= 0 && max({rU, rR, rD, rL}) <= n - 2) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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