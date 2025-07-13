#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    int total_div = 0;
    int total_sum = 0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(v[i]%k == 0)total_div++;
        total_sum += v[i];
    }
    if(total_div == n) {
        cout<<-1<<"\n";
        return;
    }
    else if(total_sum%k != 0) {
        cout<<n<<endl;
        return;
    }
    else {
        int mini=0;
        int total=total_sum;
        for(int i=0;i<n;i++) {
            total-=v[i];
            if(total%k) {
                mini = max(mini,n-i-1);
                break;
            }
        }
        total=total_sum;
        for(int i=n-1;i>=0;i--) {
            total-=v[i];
            if(total%k) {
                mini = max(mini,i);
                break;
            }
        }
        cout<<mini<<"\n";
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