#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
      cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<bool>vis(n,false);
        ll total=0;
        for(int i=31;i>=0;i--){
            ll num=0;
            for(int j=0;j<n;j++){
                if((1<<i)&(a[j]) && !vis[j])
                    num++;
            }
            if(num){
               for(int j=0;j<n;j++){
                    if((1<<i)&(a[j]) && !vis[j])
                        vis[j]=true;
                }
                total+=(num*(num-1))/2; 
            }
        }
        cout<<total<<"\n";
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