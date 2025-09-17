#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
      vector<ll> bit_count(19, 0);
    vector<vector<ll>> bit_count_map(200001);
    for (ll i = 0; i <= 18; i++)
    {
        bit_count_map[0].push_back(0);
    }
    for (ll i = 1; i <= 200000; i++)
    {
        ll pos = 0;
        ll temp = i;
        while (temp)
        {
            if (temp & 1)
            {
                bit_count[pos]++;
            }
            temp >>= 1;
            pos++;
        }
        for (ll j = 0; j <= 18; j++)
        {
            bit_count_map[i].push_back(bit_count[j]);
        }
    }
        ll l, r;
        cin >> l >> r;
        ll total = abs(l - r) + 1;
 
        ll mini = LONG_MAX;
        for (ll bits = 0; bits <= 18; bits++)
        {
            ll total_set_bit = 0;
            total_set_bit = bit_count_map[r][bits] - bit_count_map[l - 1][bits];
            ll mini_temp = total - total_set_bit;
            mini = min(mini, mini_temp);
        }
 
        cout << mini << endl;
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