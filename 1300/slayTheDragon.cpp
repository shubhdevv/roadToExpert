#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
ll n, x, y, sum = 0;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(),v.end());
    ll m;
    cin >> m;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        ll coin = 0;
        ll s = 0;
        ll c = 0;
        vector<ll>::iterator itr;
        itr = lower_bound(v.begin(),v.end(), x);
        ll ans;
        // cout<<itr-v.begin()<<"\n";
        if (itr == v.end())
        {
            ans = v[n - 1];
            if (ans < x)
                coin = x - ans;
            s = sum - ans;
            if (s < y)
                coin += y - s;
        }
        else
        {
            ans = v[itr - v.begin()];
            if (ans < x)
                coin = x - ans;
            s = sum - ans;
            if (s < y)
                coin += y - s;
            if (itr - v.begin() != 0)
            {
                ans = v[itr - v.begin() - 1];
                if (ans < x)
                    c = x - ans;
                s = sum - ans;
                if (s < y)
                    c += y - s;
                coin = min(coin, c);
            }
        }
        cout << coin << "\n";
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