#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n, a, b;
    cin >>n >>a >> b;
     if ((n - b) % 2 == 1) {
            cout << "NO\n";
        } else if (a <= b) {
            cout << "YES\n";
        } else if ((n - a) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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
         int t=1;
         cin>>t;
         for(int i=1;i<=t;i++){
            solve();
        }
        return 0;
    }  