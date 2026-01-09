#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;
ll inf = 100000000;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll dp[n+1];
    dp[n] = 0;
    dp[n-1] = 1;
    for(ll i=n-2; i>=0; i--){
        ll p = dp[i+1]+1;
        ll q = inf;
        if(i+a[i]<n){
            q = dp[i+1+a[i]];
        }
        dp[i] = min(p, q);
    }
    cout << dp[0] << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
