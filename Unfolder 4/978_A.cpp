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
    ll x=2;
    ll n, r;
    cin>>n>>r;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans=0;
    ll sit = 0;
    for(ll i=0; i<n; i++)
    {
        ll t = a[i]/2;
        ans += (t*2);
        a[i] = a[i]%2;
        sit+=t;
    }

    ll faka = r-sit;
    ll sum=0;
    for(ll i=0; i<n; i++)sum+=a[i];
    if(faka>=sum)ans+=sum;
    else{
        ans+=min(faka, sum);

        sum -= min(faka, sum);
        ans-=sum;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

