#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,k;
    cin>>n>>k;
    int score = 0;
    vector<pair<pair<int,int>,int>> v(n);
     for (auto &[p, t] : v)
        cin >> p.first >> p.second >> t;
    sort(v.begin(),v.end());
     score = k;
    for(auto &[R,T] : v) {
        int l = R.first;
        int r = R.second;
        if(l<=score && score<=r) score = max(score,T);
    }
    cout<<score<<endl;
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