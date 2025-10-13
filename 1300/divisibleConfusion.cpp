#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n,x=0;
    cin>>n;
    ll arr[n];
    bool ok=false;;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++) {
        ll in=i+2;
        if(arr[i]%in!=0)
        x++;
        else
        {
            ok=false;
            for(int j=1;j<=x;j++)
            {
                if(arr[i]%(in-j)!=0)
                {x++;ok=true;break;}
            }
            if(ok==false)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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