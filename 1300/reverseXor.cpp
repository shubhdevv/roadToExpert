#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void solve() {
    ll x;
        cin >> x;
        
        string n = bitset<64>(x).to_string();
        n.erase(0, n.find_first_not_of('0'));

        string ans = "NO";
        for(int i = 1; i < 64; i++){
            if((int)n.length() <= i){
                string w = string(i - n.length(), '0') + n;
                
                bool B = isPalindrome(w);
                if(i % 2 == 1){
                    if(w[i/2] != '0') B = false;
                }
                if(B){
                    ans = "YES";
                    break;
                }
            }
        }
        cout << ans << "\n";
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