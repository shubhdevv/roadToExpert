#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0;
    vector<int> p(n);
    for (int i = 0; i < n; i++) p[i] = i + 1;
    while (l < n) {
        if (s[l] == '1') {
            l++;
            continue;
        }
        int r = l;
        while (r + 1 < n && s[r + 1] == '0') r++;

        if (r - l + 1 == 1) {
            cout << "NO\n";
            return;
        }

        for (int i = l; i < r; i++)
            p[i] = i + 2;
        p[r] = l + 1;

        l = r + 1;
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
        cout << p[i] << " ";
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