#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
int arr[501][501];
void solve() {
      int n;
      cin>>n;
 
      int rem[n+1];
      for(int i=0;i<n;i++){
            rem[i+1]=i;
            cin>>arr[i][i];
      }
      
      bool vis[n][n];
      memset(vis,0,sizeof(vis));
      // for(int i=0;i<n;i++){
      map<int,pair<int,int>>mp;
      for(int i=0;i<n;i++){
            vis[i][i]=1;
            mp[i]={i,i};
      }
      bool flag=1;
      int cnt=0;
      set<int>st;
      for(int i=0;i<n;i++){
            st.insert(i);
      }
      while(!st.empty()){
            // cnt++;
            // if(cnt==1000){
            //       cout<<-1;
            //       return;
            // }
            flag=0;
            vector<int>temp;
            for(auto i:st){
                  int tot=0;
                  int x=mp[i].first;
                  int y=mp[i].second;
                  if(rem[arr[x][y]]==0){
                        temp.push_back(i);
                        continue;
                  }
                  if(x-1>=0 and (x-1)>=y and !vis[x-1][y]){
                        tot++;
                  }
                  if(x+1<n and (x+1)>=y and !vis[x+1][y]){
                        tot++;
                  }
                  if(y-1>=0 and (y-1)<=x and !vis[x][y-1]){
                        tot++;
                  }
                  if(y+1<n and (y+1)<=x and !vis[x][y+1]){
                        tot++;
                  }
                  if(tot==1){
                        flag=1;
                        if(x-1>=0 and (x-1)>=y and !vis[x-1][y]){
                              mp[i]={x-1,y};
                        }
                        if(x+1<n and (x+1)>=y and !vis[x+1][y]){
                              mp[i]={x+1,y};
                        }
                        if(y-1>=0 and (y-1)<=x and !vis[x][y-1]){
                              mp[i]={x,y-1};
                        }
                        if(y+1<n and (y+1)<=x and !vis[x][y+1]){
                              mp[i]={x,y+1};
                        }
                        rem[arr[i][i]]-=1;
                        vis[mp[i].first][mp[i].second]=1;
                        arr[mp[i].first][mp[i].second]=arr[i][i];    
                  }
            }
            for(auto z:temp){
                  st.erase(z);
            }
      }
      for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
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