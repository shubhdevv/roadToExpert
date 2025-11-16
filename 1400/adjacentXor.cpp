#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin >> n;

    vector<long long> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    if (A[n-1] != B[n-1]) {
        cout << "NO\n";
        return;
    }

    for (int i = n - 2; i >= 0; i--) {
        if (A[i] != B[i] &&
            (A[i] ^ A[i+1]) != B[i] &&
            (A[i] ^ B[i+1]) != B[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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