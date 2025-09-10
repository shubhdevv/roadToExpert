#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mini=1e9+5;
    int ind;
    for(int i=0;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
            ind=i;
        }
    }
    vector<vector<int>>ans;
    for(int i=ind+1;i<n;i++){
        if(a[i]<a[i-1]){
            ans.push_back({ind+1,i+1,mini,a[i-1]+1});
            a[i]=a[i-1]+1;
        }
        else{
            ans.push_back({i,i+1,a[i-1],a[i-1]+1});
            a[i]=a[i-1]+1;
        }
    }
    for(int i=ind-1;i>=0;i--){
        if(a[i]<a[i+1]){
            ans.push_back({ind+1,i+1,mini,a[i+1]+1});
            a[i]=a[i+1]+1;
        }
        else{
            ans.push_back({i+2,i+1,a[i+1],a[i+1]+1});
            a[i]=a[i+1]+1;
        }
    }
    
    cout<<ans.size()<<"\n";
    for(auto i : ans){
        for(auto j : i) cout<<j<<" ";
        cout<<"\n";
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