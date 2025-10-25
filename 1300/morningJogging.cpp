#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
multiset<pair<int,int>>mst;
int arr[101][101];
void solve() {
    int n,m;
      cin>>n>>m;
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  arr[i][j]=-1;
                  int x;
                  cin>>x;
                  mst.insert({x,i});
            }
      }
      for(int i=0;i<m;i++){
            auto itr=mst.begin();
            arr[itr->second][i]=itr->first;
            mst.erase(itr);
      }
      while(!mst.empty()){
            auto itr=mst.begin();
            int in=0;
            while(arr[itr->second][in]!=-1){
                  in++;
            }
            arr[itr->second][in]=itr->first;
            mst.erase(itr);
      }
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
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