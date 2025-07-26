#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int N,Q,K;
	cin >> N >> Q >> K;
	vector<int> v(N);
	for(int &x: v)cin >> x;
	int l,r;
	while(Q--){
		cin >> l >> r;
		cout << K + v[r-1] - v[l-1] - 2*(r - l) - 1 << "\n";
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
            solve();
        return 0;
    }  