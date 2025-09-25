#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846

int left(string s, string t, int i, int x)
{
    while (x < t.length() && i >= 0)
    {
        if (t[x] == s[i])
        {
            x++;
            i--;
        }
        else
        {
            break;
        }
    }
    if (x == t.length())
    {
        return 1;
    }
    return 0;
}

int right(string s, string t, int i, int x)
{
    if (x == t.length())
    {
        return 1;
    }
    if (x + 1 == t.length())
    {
        if (i + 1 < s.length() && s[i + 1] == t[x])
        {
            return 1;
        }
        else if (i - 1 >= 0 && s[i - 1] == t[x])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
 
    int r1 = 0, r2 = 0;
    if (i - 1 >= 0 && s[i - 1] == t[x])
    {
        r1 = left(s, t, i - 1, x);
    }
    if (r1)
    {
        return 1;
    }
    if (i + 1 < s.length() && s[i + 1] == t[x])
    {
        r2 = right(s, t, i + 1, x + 1);
    }
 
    return (r1 || r2);
}

void solve() {
    string s, t;
        cin >> s >> t;
        int f = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t[0])
            {
                f = right(s, t, i, 1);
                if (f == 1)
                {
                    break;
                }
            }
        }
        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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