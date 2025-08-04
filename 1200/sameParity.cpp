#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,k;
        cin>>n>>k;
        if(n<k)cout<<"NO"<<endl;
        else if(k==1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
        }
        else if(n%2==0)
        {
            if(k%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
            else if(k*2<=n)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<2<<" ";
                cout<<n-(k-1)*2<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else
        {
            if(k%2==1)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
            else cout<<"NO"<<endl;
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