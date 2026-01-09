#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;
ll cn = 200005;

ll nCr(ll n, ll r)
{
    if(n<r)return 0;
    else return (n*(n-1)*(n-2))/6;
}

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    map<ll, ll> mp;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    sort(a, a+n);
    vector<ll> b;
    b.push_back(a[0]);
    for(ll i=1; i<n; i++)
    {
        if(a[i] != a[i-1])b.push_back(a[i]);
    }

    ll ans=0, past = 0;

    for(ll i=0; i<b.size(); i++)
    {
        ll x = b[i];
        ll y = mp[x] + mp[x-1] + mp[x-2] ;
        ans += nCr(y, 3);
        ans -= nCr(mp[x-1] + mp[x-2], 3);
    }

    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

