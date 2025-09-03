#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n,a,b;
    cin>>n>>a>>b;
    if(a+b>n-2)
    cout<<"-1\n";
    else if(abs(a-b)>1)cout<<"-1\n";
    else{
        if(a==0&&b==0)
        {
            for(int i=0;i<n;i++)cout<<i+1<<" ";
            cout<<"\n";
        }
        else if(a==1&&b==0)
        {
            for(int i=1;i<=n-2;i++)cout<<i<<" ";
            cout<<n<<" "<<n-1<<"\n";
        }
        else if(a==0&&b==1)
        {
            cout<<"2 1"<<" ";
            for(int i=3;i<=n;i++)cout<<i<<" ";
            cout<<"\n";
        }
        else
        {
            ll x;
            if(a>b)
            {
                x=a+b+1;
                for(int i=1;i<=n-x;i++)cout<<i<<" ";
                for(int i=n-x+1;i<=n;i+=2)
                {
                    cout<<i+1<<" "<<i<<" ";
                }cout<<"\n";
            }
            else if(b>a)
            {
                x=a+b+1;
                for(int i=1;i<=x;i+=2)
                {
                    cout<<i+1<<" "<<i<<" ";
                }
                for(int i=x+1;i<=n;i++)
                {
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
            else
            {
                x=a+b;
                for(int i=1;i<=x;i+=2)
                {
                    cout<<i+1<<" "<<i<<" ";
                }
                for(int i=x+1;i<=n-2;i++)
                {
                    cout<<i<<" ";
                }
                cout<<n<<" "<<n-1<<" ";
                cout<<"\n";
            }
        }
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