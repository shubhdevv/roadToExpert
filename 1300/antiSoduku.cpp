#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
void solve() {
    ll a[10][10];
        ll b[10][10];
 
 
        for(ll i=1;i<=9;i++){
            string s;
            cin>>s;
            for(ll j=1;j<=9;j++){
                a[i][j] = s[j-1]-'0';
                b[i][j] = a[i][j];
            }
        }
        ll val = a[1][1];
        ll req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[1][1] = req_val;
 
        val = a[2][4];
        req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[2][4] = req_val;
 
        val = a[3][7];
        req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[3][7] = req_val;
 
        val = a[4][2];
        req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[4][2] = req_val;
 
        val = a[5][5];
        req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[5][5] = req_val;
 
        val = a[6][8];
        req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[6][8] = req_val;
 
        val = a[7][3];
        req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[7][3] = req_val;
 
        val = a[8][6];
        req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[8][6] = req_val;
 
        val = a[9][9];
        req_val;
        for(ll i=1;i<=9;i++){
            if(i != val){
                req_val = i;
            }
        }
        b[9][9] = req_val;
 
        for(ll i=1;i<=9;i++){
            for(ll j=1;j<=9;j++){
                cout<<b[i][j];
            }
            cout<<"\n";
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