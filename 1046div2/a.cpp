#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (max(a,b) <= 2*min(a,b)+2 && max(c-a,d-b) <= 2*min(c-a,d-b)+2)
            cout << "YES\n";
        else
            cout << "NO\n";
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