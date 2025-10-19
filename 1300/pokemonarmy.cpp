#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,q;
        cin>>n>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll curr=a[0];
        ll total=0;
        int flip=0;
        for(int i=1;i<n;i++){
            if(flip==0){
                if(a[i]>a[i-1])
                    curr=a[i];
                else{
                    total+=a[i-1];
                    curr=a[i];
                    flip=1;
                }
            }
            else{
                if(a[i]<a[i-1])
                    curr=a[i];
                else{
                    total-=a[i-1];
                    curr=a[i];
                    flip=0;
                }
            }
        }
        if(flip==0)
            total+=a[n-1];
        cout<<total<<"\n";
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