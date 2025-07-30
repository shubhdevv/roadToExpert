#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
        int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		int pos = n - 1;
		while (pos > 0 && a[pos - 1] >= a[pos]) --pos;
		while (pos > 0 && a[pos - 1] <= a[pos]) --pos;
		cout << pos << endl;
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