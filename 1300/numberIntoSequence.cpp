#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    long long n;
            cin>>n;
            vector<pair<ll,ll>>v;
            for(ll i=2;i*i<=n;i++){
                int cnt=0;
                while(n%i==0){
                    cnt++;
                    n/=i;
                }
                if(cnt>0)
                    v.push_back({cnt,i});
            }
            if(n>1)
            v.push_back({1,n});
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
            vector<long long>ans;
            for(int i=0;i<v[0].first;i++)
                ans.push_back(v[0].second);
            for(int i=1;i<(int)v.size();i++){
                for(int j=0;j<v[i].first;j++)
                    ans[v[0].first-1]*=v[i].second;
            }
            cout<<v[0].first<<"\n";
            for(auto i : ans)
                cout<<i<<" ";
            cout<<"\n";
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