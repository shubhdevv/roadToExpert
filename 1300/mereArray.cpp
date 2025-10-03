#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int mini=*min_element(a.begin(),a.end());
        vector<int>v;
        for(int i=0;i<n;i++){
            if(__gcd(a[i],mini)==mini){
                v.push_back(a[i]);
                a[i]=-1;
            }
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(a[i]==-1){
                a[i]=v[j];
                j++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i+1]>=a[i])
                continue;
            else{
                cout<<"NO"<<"\n";
                return;
            }
        }
        cout<<"YES"<<"\n";
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