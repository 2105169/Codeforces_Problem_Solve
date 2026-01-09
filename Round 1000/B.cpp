#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    ll n, l, r;
    cin>>n>>l>>r;
    vector<ll> a, b, c;
    ll d[n+1];
    for(ll i=1; i<=n; i++)cin>>d[i];

    for(ll i=1; i<l; i++)a.push_back(d[i]);
    for(ll i=l; i<=r; i++)b.push_back(d[i]);
    for(ll i=r+1; i<=n; i++)c.push_back(d[i]);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll ans=LLONG_MAX;
    ll t=0;
    vector<ll> s;
    for(ll i=0; i<b.size(); i++)s.push_back(b[i]);
    for(ll i=0; i<min(a.size(), b.size()); i++){
        if(a[i]<b[b.size()-i-1])b[b.size()-i-1] = a[i];
    }
    for(ll i=0; i<b.size(); i++)t+=b[i];
    ans = min(ans, t);
    t = 0;

    for(ll i=0; i<min(c.size(), s.size()); i++){
        if(c[i]<s[s.size()-i-1])s[s.size()-i-1] = c[i];
    }
    for(ll i=0; i<s.size(); i++)t+=s[i];
    ans = min(ans, t);
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}