#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    long int n,a,b,c,x,y,z,zc,ans;
    while(cin>>n>>a>>b>>c)
    {
        ans = 0;
    for(x=0; x*a<=n; x++)
    {
        for(y=0; x*a+y*b<=n; y++)
        {
            zc = n - (x*a + y*b);
            if( zc%c == 0)
            {
                z = zc/c;
                ans = max(ans,x+y+z);
            }
        }
    }
    cout<<ans<<endl;
}
}

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
            solve();
        return 0;
    }  