#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
vector<ll> v[8000000];

ll isithBitSet(ll n, ll k) 
{ 
    if (n & (1LL << (k)))   return 1; 
    else return 0; 
} 
 
vector<ll> tempOne;
vector<ll> tempZero;
void solve() {
    ll n;
    cin >> n;
    ll x;
    ll index = -1;
    vector<ll> finalAns;
    for(ll i = 0; i < n; i++)	{
    	cin >> x;
    	v[index+1].push_back(x);
    }
    ll ans = 0;
    ll count = 0;
    for(ll i = 31; i >= 0; i--)	{
    	ll temp = index+1;
    	index = count;
    	ll ansOne = 0;
    	ll ansZero = 0;
    	for(ll j = temp; j <= index; j++)	{
    		ll len = v[j].size();
    		ll one = 0;
    		ll zero = 0;
    		tempOne.clear();
    		tempZero.clear();
    		for(ll k = (len-1); k >= 0; k--)	{
    			if(isithBitSet(v[j][k], i))	{
    				ansZero += zero;
    				one++;
    				tempZero.push_back(v[j][k]);
    			} else 	{
    				ansOne += one;
    				zero++;
    				tempOne.push_back(v[j][k]);
    			}	
    		}
    		if(tempOne.size() > 1)	{
    			v[count+1] = tempOne;
    			reverse((v[count+1]).begin(),v[count+1].end());
    			count++;
    		}
    		if(tempZero.size() > 1)	{
    			v[count+1] = tempZero;
    			reverse((v[count+1]).begin(),v[count+1].end());
    			count++;
    		}
    	}
    	ans += min(ansOne, ansZero);
    	if(ansZero <= ansOne)	{
			finalAns.push_back(0);
		} else 	{
			finalAns.push_back(1);
		}
	}
    cout << ans << " ";
    ans = 0;
    ll power2 = 1;
    reverse(finalAns.begin(),finalAns.end());
    for(ll i = 0; i < (ll)finalAns.size(); i++)	{
    	ans += finalAns[i]*power2;
    	power2 *= 2;
    }
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