#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
ll fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
void solve() {
        ll n;
        cin >> n;
        ll r = n / 2;
        ll ans = (fact(n) / (fact(r) * fact(n - r))) / 2 * fact(n / 2 - 1) * fact(n / 2 - 1);
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
            solve();
        return 0;
    }  