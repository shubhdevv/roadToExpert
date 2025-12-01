#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     int n;
    cin >> n;
    vector<long long> a(n);

    long long s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }

    long long cur[2] = {0, 0};
    for (int i = 0; i < n; i++) {
        cur[i % 2] += a[i] - 1;
    }

    for (int j = 0; j < 2; j++) {
        if (2 * cur[j] > s) continue;

        for (int i = 0; i < n; i++) {
            if (i % 2 == j) a[i] = 1;
        }
        break;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
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