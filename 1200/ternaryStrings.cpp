#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    string s;
    cin >> s;
    int one = -1, two = -1, three = -1;
    int minLen = INT_MAX;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') one = i;
        else if (s[i] == '2') two = i;
        else if (s[i] == '3') three = i;

        if (one != -1 && two != -1 && three != -1) {
            int left = min({one, two, three});
            int right = max({one, two, three});
            minLen = min(minLen, right - left + 1);
        }
    }

    cout << (minLen == INT_MAX ? 0 : minLen) << "\n";
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