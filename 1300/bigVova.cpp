#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
        cin>>n;
        vector<int>a(n),b(n),vis(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int d=0;
        for(int i=0;i<n;i++){
            int ind=0;
            int maxi=0;
            for(int j=0;j<n;j++){
                if(!vis[j] && __gcd(d,a[j])>maxi){
                    maxi=__gcd(d,a[j]);
                    ind=j;
                }
            }
            d=maxi;
            vis[ind]=1;
            b[i]=a[ind];
        }
        for(auto i : b)
            cout<<i<<" ";
        cout<<"\n";
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