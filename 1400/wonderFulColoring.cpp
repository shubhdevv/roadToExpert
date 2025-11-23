#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N = 200 * 1000 + 13;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int ans[MAX_N];
    map<int, vector<int>> indices;
    int n, k;
		cin >> n >> k;
		indices.clear();
		memset(ans, 0, n * sizeof(ans[0]));
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (indices[x].size() < k)
				indices[x].push_back(i);
		}
		int m = 0;
		for (auto e : indices) m += e.second.size();
		m -= m % k;
		int color = 0;
		for (auto e : indices)
			for (auto i : e.second)
			{
				ans[i] = ++color;
				color %= k;
				if (--m == 0) goto _output;
			}
	_output:
		for (int i = 0; i < n; i++)
			cout << ans[i] << ' ';
		cout << '\n';
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