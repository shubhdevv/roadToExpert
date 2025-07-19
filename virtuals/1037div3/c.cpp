#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto& x : v) cin>>x;
    int ini = v[k-1]; //0 based indexing
    set<int> st;
    for(auto& x : v) if(x >= ini) st.insert(x);
    bool ans = 1;
    int prev = ini;
    for(auto&x : st) {
        if(x - prev > ini) ans = 0;
        prev = x;
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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