#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

bool sign(ll num){
    return num>0;
}

void solve() {
     ll n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        
        ll ans = 0;
        for(int i=0;i<n;i++){
            ll j = i;
            ll maxi = arr[i];
            
           
            while(j<n  && sign(arr[i])==sign(arr[j])){
                maxi = max(maxi,arr[j]);
                j++;
            }
            i = j-1;
            ans+=maxi;
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