#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846


int check(int a1,int a2,int b1,int b2){
    int ans = 0;
    if(a1<=a2 && b1<= b2) ans+=2;
    if(a1<=b2 && b1<=a2) ans+=2;
    if(ans == 4) return 1;
    else return 0;
}
void solve() {
    int n; cin>>n;
        vector<int> a, b;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x; cin>>x;
            b.push_back(x);
        }
        int val = 0;
        for(int i=1; i<n; i++){
            if(!check(a[i-1],a[i], b[i-1],b[i])){
                val++;
            }
        }
        ll ans = 1;
        for(int i = 0; i < n - val; i++) ans = (ans * 2) % 998244353;
        if(n!=1) cout << ans << endl; else cout << 2 << endl;
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