#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    set<int>s;
    for(auto& a : v) {
        cin>>a;
        s.insert(a);
    }
    int unique = s.size();
    while(!s.count(unique)) {
        s.insert(unique);
        unique++;
    }
    cout<<unique<<endl;
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