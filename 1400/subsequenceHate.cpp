#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    string s;
		cin >> s;
		int suf0 = 0, suf1 = 0;
		for(auto &it:s)
		{
			suf0 += (it == '0');
			suf1 += (it == '1');
		}
		int ans = min(suf0, suf1); 
		int pref0 = 0, pref1 = 0;
		for(auto &it:s)
		{
			pref0 += (it == '0'), suf0 -= (it == '0');
			pref1 += (it == '1'), suf1 -= (it == '1');
			ans = min(ans, pref1 + suf0);
			ans = min(ans, pref0 + suf1);
		}
		cout << ans << endl;
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