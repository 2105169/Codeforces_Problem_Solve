#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    string a, b, c;
    cin>>a>>b>>c;
    ll x = a.size(), y = b.size();
    ll n = x + y;
    ll dp[x+1][y+1];
    for(ll i=0; i<=x; i++){
        for(ll j=0; j<=y; j++){
            dp[i][j] = LLONG_MAX;
        }
    }
    dp[0][0] = 0;
    for(ll i=0; i<x; i++){
        dp[i+1][0] = dp[i][0] + (c[i] != a[i]);
    }
    for(ll j=0; j<y; j++){
        dp[0][j+1] = dp[0][j] + (c[j] != b[j]);
    }

    for(ll i=1; i<=x; i++){
        for(ll j=1; j<=y; j++){
           
            dp[i][j] = min(dp[i-1][j] + (a[i-1] != c[i+j-1]), dp[i][j-1]+ (b[j-1] != c[i+j-1]));            
        }
    }
    cout << dp[x][y] << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}