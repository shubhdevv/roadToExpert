#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll n;
    string s1,s2;
    cin>>n>>s1>>s2;
    vector<int> prefix(n,0);
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(s1[i]=='1')
            sum++;
        else
            sum--;
        prefix[i]=sum;
    }
    ll pos=0;
    for(ll i=0;i<n;i++){
        if(s1[i]!=s2[i])
            pos=i;
    }
    ll count=0;
    for(ll i=pos;i>=0;i--){
        if(s1[i]!=s2[i]&&count%2==0){
            if(prefix[i]==0){
                count++;
                while(i>=0&&s1[i]!=s2[i])
                    i--;
                i++;
            }
            else{
               cout<<"NO"<<endl;
                return;
            }
        }
        else if(s1[i]!=s2[i]&&count%2==1){
            continue;
        }
        else if(s1[i]==s2[i]&&count%2==0)
            continue;
        else if(s1[i]==s2[i]&&count%2==1){
            if(prefix[i]==0){
                count++;
                while(i>=0&&s1[i]==s2[i])
                    i--;
                i++;
            }
            else{
               cout<<"NO"<<endl;
                return;
            }
        }
    }
   cout<<"YES"<<endl;
    return;
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