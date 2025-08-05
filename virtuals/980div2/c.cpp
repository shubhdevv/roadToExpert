#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin>>n;
     vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end(), [](const pair<int, int> &x, const pair<int, int> &y) {
            int cnt = 0;
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    int xi = (i == 0 ? x.first : x.second);
                    int yj = (j == 0 ? y.first : y.second);
                    if(xi < yj) cnt++;
                    else if(xi > yj) cnt--;
                }
            }
            if(cnt > 0) return true;
            else if(cnt < 0) return false;
            else return (x.first + x.second) < (y.first + y.second);
        });

        for(int i = 0; i < n; i++) {
            cout << v[i].first << ' ' << v[i].second;
            if(i == n - 1) cout << "\n"; 
            else cout << ' ';
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