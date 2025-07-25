#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     ll n;
    char ch;
    string s;
    cin>>n>>ch>>s;
    bool ok=true;
    ll in=-1;
    for(int i=0;i<n;i++){
        if(s[i]==ch)in=i;
        if(s[i]!=ch)ok=false;
    }
    if(ok)cout<<"0\n";
    else if(in==-1){
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
    else if(in==n-1)
    {
        cout<<"1\n"<<in+1<<"\n";
    }
    else if(in>=n/2)
    {
        
        cout<<"1\n"<<in+1<<"\n";
    }
    else
    {
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
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