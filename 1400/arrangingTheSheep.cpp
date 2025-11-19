#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for(auto x : s)
		cnt += (x == '*' ? 1 : 0);
	int pos = -1;
	int cur = -1;
	for(int i = 0; i < n; i++)
	{
	 	if(s[i] == '*')
	 	{
	 	    cur++;
	 	    if(cur == cnt / 2)
	 	    	pos = i;
	 	}	
	}
	long long ans = 0;
	cur = pos - cnt / 2;
	for(int i = 0; i < n; i++)
		if(s[i] == '*')
		{
		 	ans += abs(cur - i);
		 	cur++;
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