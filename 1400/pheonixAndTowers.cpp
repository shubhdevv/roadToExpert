#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int N,M,X;
    int H[100001];
     cin>>N>>M>>X;
     cout<<"YES"<<endl;
  set<pair<int,int>>s; 
  for (int i=1;i<=M;i++)
    s.insert({0,i});
  for (int i=0;i<N;i++){
    cin>>H[i];
    pair<int,int>p=*s.begin();
    s.erase(p);
    cout<<p.second<<' ';
    s.insert({p.first+H[i],p.second});
  }
  cout<<endl;
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