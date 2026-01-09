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
    ll n;
    cin>>n;
    ll a[n+2];
    a[0] = 0;
    a[n+1] = -1;
    for(ll i=1; i<=n; i++)cin>>a[i];

    ll ans=LLONG_MAX;

    for(ll i=1; i<=n; i++)
    {
        if(a[i]==a[i+1])
        {
            ll t = 0;
            if(a[i]==a[i+1])t++;
            if(a[i]==a[i-1])t++;
            ll x = n-i+1;
            ll f = 0;
            if(a[x]==a[x+1])t++;
            if(a[x]==a[x-1])t++;
            swap(a[i], a[x]);
            ll z = 0;
            if(a[i]==a[i+1])z++;
            if(a[i]==a[i-1])z++;
            if(a[x]==a[x+1])z++;
            if(a[x]==a[x-1])z++;
            if(z>f)
            {
                swap(a[i], a[x]);
            }
        }
    }
    ll g = 0;
    for(ll i=1; i<=n; i++)
    {
        if(a[i]==a[i+1])g++;
    }
    ans = min(g, ans);

    for(ll i=n; i>0; i--)
    {
        if(a[i]==a[i+1])
        {
            ll t = 0;
            if(a[i]==a[i+1])t++;
            if(a[i]==a[i-1])t++;
            ll x = n-i+1;
            ll f = 0;
            if(a[x]==a[x+1])t++;
            if(a[x]==a[x-1])t++;
            swap(a[i], a[x]);
            ll z = 0;
            if(a[i]==a[i+1])z++;
            if(a[i]==a[i-1])z++;
            if(a[x]==a[x+1])z++;
            if(a[x]==a[x-1])z++;
            if(z>f)
            {
                swap(a[i], a[x]);
            }
        }
    }
    g=0;
    for(ll i=1; i<=n; i++)
    {
        if(a[i]==a[i+1])g++;
    }
    ans = min(g, ans);
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

