#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
        int n;
        cin>>n;
        int kr,kc,dr,dc;
        cin>>kr>>kc>>dr>>dc;
        int ans =0; 
            if(kr<dr){
                kr = 0;
                ans = dr;
            }else if(kr>dr){
                kr = n;
                ans= max((n-dr),ans);
            }            
            if(kc<dc){
                kc = 0;
                ans = max(dc,ans);
            }else if(kc>dc){
                kc = n;
                ans= max((n-dc),ans);
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