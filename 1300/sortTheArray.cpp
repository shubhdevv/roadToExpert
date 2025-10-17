#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
      ll n;
    cin>>n;
    vector<ll> v(n),temp(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        temp[i]=v[i];
    }
    sort(v.begin(),v.end());
    ll first=-1,second=-1;
    for(ll i=0;i<n;i++)
    {
        if(v[i]!=temp[i])
        {
            if(first==-1)
                first=i;
            second=i+1;
        }
    }
    reverse(temp.begin()+first,temp.begin()+second);

    if(is_sorted(temp.begin(),temp.end()))
    {
        cout<<"yes"<<endl;
        if(first==-1)
            first=0;
        if(second==-1)
            second=1;
        cout<<first+1<<" "<<second<<endl;
    }
    else
    cout<<"no"<<endl;
    return;
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