#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
const int N = 2e5 + 5;
int n;
int a[N], b[N], pos[N];
map< int, int > offset;

void solve() {
    cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		pos[a[i]] = i;
	}
	for(int i = 1; i <= n; i++)
		cin >> b[i];
	for(int i = 1; i <= n; i++)
	{
		int cur = pos[b[i]] - i;
		if(cur < 0)
			cur += n;
		offset[cur]++;
	}
	int ans = 0;
	for(auto &it:offset)
		ans = max(ans, it.second);
	cout << ans;
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