#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
#define gcd __gcd
using namespace std;

void solve()
{
    ll n, a, b;
    cin>>n>>a>>b;
    ll c[n];
    for(ll i=0; i<n; i++)cin>>c[i];
    ll g= gcd(a, b);
    for(ll i=0; i<n; i++){
        c[i] = c[i] % g;
    }
    sort(c, c+n);
    ll mn = c[0], mx=c[n-1], ans;
    ans = mx - mn;
    for(ll i=0; i<n-1; i++){
        mx = c[i] + g;
        mn = c[i+1];
        ans = min(ans, mx-mn);
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
