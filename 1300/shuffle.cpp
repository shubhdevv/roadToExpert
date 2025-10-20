#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
       int n,x,m; cin>>n>>x>>m;
        int p1 = x, p2 = x;
        for(int i = 0; i<m; i++){
            int l,r; cin>>l>>r;
            if(r>=p1 and l<=p2)
            {
                p1 = min(p1,l);    
                p2 = max(p2,r);
            }
        }
        cout<<p2-p1+1<<endl;
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