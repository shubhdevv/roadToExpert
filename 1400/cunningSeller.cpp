#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
vector <ll> cost;
void solve() {
    int n, k;
        cin >> n >> k;
        vector <long long> tr;
        long long min_k = 0;
        while (n) {
            tr.push_back(n % 3);
            min_k += n % 3;
            n /= 3;
        }
        if (min_k > k) {
            cout << -1 << '\n';
            return;
        }
        k -= min_k;
        k /= 2;
        for (int i = (int)tr.size() - 1; i >= 1; --i) {
            if (tr[i] <= k) {
                tr[i - 1] += 3 * tr[i];
                k -= tr[i];
                tr[i] = 0;
            } else {
                tr[i - 1] += k * 3;
                tr[i] -= k;
                break;
            }
        }
        ll an = 0;
        for (int i = (int)tr.size() - 1; i >= 0; --i)
            an += cost[i] * tr[i];
        cout << an << '\n';
    }

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdou
    ll c = 3;
    ll cnt = 1;
    for (int i = 0; i < 21; ++i) {
        cost.push_back(c);
        c = 3 * c + cnt;
        cnt *= 3;
    }
         int t=1;
         cin>>t;
         for(int i=1;i<=t;i++){
            solve();
        }
        return 0;
    }  