#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
     int n;
     cin >> n;
        string s;
        cin >> s;
        int sw = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] < s[i-1])sw = 0;
        }
        if(sw){
            cout << s << '\n';
            return;
        }
        string ans;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1')break;
            ans.push_back('0');
        }
        ans.push_back('0');
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == '0')break;
            ans.push_back('1');
        }
        cout << ans << '\n';
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