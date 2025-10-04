#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
const int N = 1e5 + 5;
ll n;
int arr[N];
int fun(int x)
{
	int ans = 0;
	int delta = 0;
	for(int i = 1; i <= n; i++)
	{
		if(arr[i] != x)
			delta += (x - arr[i]);
		ans += abs(delta);
		x ^= 1;
	}
	return ans;
}

void solve() {
    cin >> n;
	int f[2];
    f[0]=0;f[1]=0;
	for(int i = 1; i <= n; i++) {   
			cin >> arr[i];
			arr[i] = arr[i] % 2;
			f[arr[i]]++;
		}
		if(n % 2 == 0)
		{
			if(f[0] == f[1])
			{
				int ans = min(fun(0), fun(1));
				cout << ans << endl;
			}
			else
				cout << -1 << endl;
		}
		else
		{
			if(f[0] == f[1] + 1)
				cout << fun(0) << endl;
			else if(f[1] == f[0] + 1)
				cout << fun(1) << endl;
			else
				cout << -1 << endl;
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