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
    ll n, c, d;
    cin>>n>>c>>d;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n, greater<ll>());

    ll s[n];
    s[0] = a[0];
    for(ll i=1; i<n; i++)
        s[i] = s[i-1] + a[i];

    ll ans=-1;
    ll f = min(n-1, d-1);
    if(s[f]>=c)cout << "Infinity\n";
    else
    {
        for(ll i=0; i<=d+1; i++)
        {
            ll m = d/(i+1);
            ll r = min(i, n-1);
            ll x = s[r]*m;
            ll y = d % (i+1);
            y = min(y, n-1);
            if(y>0)
                x += s[y-1];

            if(x>=c)ans = max(ans, i);

        }
        if(ans==-1)cout << "Impossible\n";
        else cout << ans << endl;
    }


}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

