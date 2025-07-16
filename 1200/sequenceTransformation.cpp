#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     int n;
            cin>>n;
            vector<int>a(n);
            map<int,vector<int>>mp;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                mp[x].push_back(i);
            }
            if(n==1){
                cout<<0<<"\n";
                return;
            }
            int len=2e5+2;
            for(auto i : mp){
                int ok=0;
                if((int)i.second.size()==1){
                    if(i.second[0]==0 || i.second[0]==n-1)
                        len=min(len,1);
                    else 
                        len=min(len,2);
                    continue;
                }
                for(int j=0;j<(int)i.second.size();j++){
                    if(j==0){
                        if(i.second[j]>=1)
                            ok++;
                        continue;
                    }
                    if(j==(int)i.second.size()-1){
                        if(i.second[j]<(n-1))
                            ok++;
                    }
                    if(i.second[j]-i.second[j-1]>1)
                        ok++;
                }
                len=min(len,ok);
            }
            cout<<len<<"\n";
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