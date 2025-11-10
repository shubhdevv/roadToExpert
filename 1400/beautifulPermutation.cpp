#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

ll query(int type, int l, int r){
    ll x;
    cout << type << ' ' << l << ' ' << r << flush << endl;
    cin >> x;
    return x;
}
 

void solve() {
    int n;
        cin >> n;

        ll sum = query(2, 1, n);
        sum -= ((n * (n + 1)) / 2);

        ll diff = sum - 1;

        int l = 1, r = n;

        while(l < r){
            int md = (l + r) / 2;
            ll val1 = query(1, 1, md);
            ll val2 = query(2, 1, md);

            if(val1 < val2) r = md;
            else l = md + 1;
        }        

        cout << "!" << ' ' << l << ' ' << diff + l << flush << endl;
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