#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

void solve() {
     ll n,c=0,ans=LONG_LONG_MAX;
    cin>>n;
    string sn;
    if(isPowerOfTwo(n)==true)
    cout<<"0\n";
    else
    {
        ll j=0,k=0,nn=1;
        string s=to_string(n);
        for(int i=0;i<=60;i++)
        {
            nn=(ll)pow(2,i);
            sn=to_string(nn);
            c=0,j=0,k=0;
            bool bb;
            // cout<<sn<<"\n";
            while(j!=s.length()&&k!=sn.length())
            {
                if(s[j]==sn[k])
                {
                    j++;
                    k++;
                    bb=true;
                }
                else
                {
                    j++;
                    c++;
                    bb=false;
                }
            }
            if(bb=true)
            {
                if(j==s.length())
                {
                    k--;
                    c+=sn.length()-k-1;
                }
                else if(k==sn.length())
                {
                    j--;
                    c+=s.length()-j-1;
                }
            }
            else
            {
                k--;
                c+=sn.length()-k-1;
            }
            if(c==1)
            {ans=1;break;}
            else ans=min(ans,c);
        }
        cout<<ans<<"\n";
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