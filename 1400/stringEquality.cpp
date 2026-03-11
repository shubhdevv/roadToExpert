#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
      int i, n, k; string a, b;
        cin >> n >> k >> a >> b;
        array<int, 27> have{}, need{};
        for(auto& c: a)
            have[c-'a']++;
        for(auto& c: b)
            need[c-'a']++;
     
        bool bad = false;
        for(i = 0; i < 26; i++) {
            if(have[i] < need[i] || (have[i] -= need[i]) % k)
                bad = true;
            have[i+1] += have[i];
        }
        cout << (bad? "No" : "Yes") << '\n';
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