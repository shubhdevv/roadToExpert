#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    map<int, vector<int>> layers;
    int n;
    cin >> n;
    int big = -1;
    vector<int> path;
    for (int i = 1; i <= n; i++) {
        cout << "? " << i << " " << n << " ";
        for (int j = 1; j <= n; j++) {
            cout << j;
            if (j != n) cout << " ";
        }
        cout << "\n";
        cout.flush();
        int ans;
        cin >> ans;
        layers[ans].push_back(i);
        if (ans > big) {
            big = ans;
            path = {i};
        }
    }
    for (int depth = big - 1; depth > 0; depth--) {
        if (!layers.count(depth)) continue;
        for (int candidate : layers[depth]) {
            cout << "? " << path.back() << " 2 "
                 << path.back() << " " << candidate << "\n";
            cout.flush();
            int ans;
            cin >> ans;
            if (ans == 2) {
                path.push_back(candidate);
                break;
            }
        }
    }
    cout << "! " << path.size() << " ";
    for (int i = 0; i < path.size(); i++) {
        cout << path[i];
        if (i + 1 != path.size()) cout << " ";
    }
    cout << "\n";
    cout.flush();
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