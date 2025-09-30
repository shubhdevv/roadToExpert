#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n;
    cin >> n;
    if (n % 2 == 0) cout << n / 2 << " " << n / 2 << "\n"; 
    else {
            bool found = false;
            for (ll i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    ll a = n / i;
                    cout << a << " " << n - a << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << 1 << " " << n - 1 << "\n";
            }
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