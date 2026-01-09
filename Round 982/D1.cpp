#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin>>n>>m;
    ll a[n+1], b[m+1], dp[n+1], sm[n+1];
    a[0] = 0;
    b[0] = 0;
    dp[0] = 0;
    sm[0] = 0;
    for(ll i=1; i<=n; i++)cin>>a[i];
    for(ll i=1; i<=m; i++)cin>>b[i];
    for(ll i=1; i<=n; i++)dp[i] = 1e18;

    for(ll i=1; i<=n; i++){
        sm[i] = sm[i-1] + a[i];
    }

    ll ans=0,mx=0;
    for(ll i=1; i<=n; i++)mx = max(mx, a[i]);
    if(mx>b[1])cout << -1 << endl;
    else{
        for(ll i=1; i<=m; i++){
            int r=0;
            for(ll j=0; j<n; j++){
                if(r<j)r = j;
                while(r<n && (sm[r+1]-sm[j])<=b[i])r++;
                dp[r] = min(dp[r], dp[j] + m-i);
            }
        }
        cout << dp[n] << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
