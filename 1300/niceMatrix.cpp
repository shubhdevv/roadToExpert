#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
int a[105][105];
void solve() {
    int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }
        ll total=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int other1=a[i][m-j-1];
                int other2=a[n-i-1][j];
                vector<int>b;
                b.push_back(a[i][j]);
                b.push_back(other1);
                b.push_back(other2);
                sort(b.begin(),b.end());
                a[i][j]=a[i][m-j-1]=a[n-i-1][j]=b[1];
                total+=(ll)(b[2]-b[1])+(b[1]-b[0]);
            }
        }
        cout<<(total)<<"\n";
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