#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto& a : v) cin>>a;
    int ans = 0;
    int count = 0;
    for(int i=0;i<n;i++) {
        if(v[i] == 0) count++;
        else count = 0;

        if(count == k) {
            ans++; 
            i++;
            count = 0;
        }
    }
    cout<<ans<<endl;
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