#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,x,a;
     cin>>n>>x;
     int even = 0,odd = 0;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a % 2 == 1)odd++;
            else even++;
        }
        int m = min(even,x-1);
        int d = x - m;

        if(d % 2 == 0){
            d++;
        }
        if(odd >= d && d <= x)cout<<"Yes\n";
        else cout<<"No\n";
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