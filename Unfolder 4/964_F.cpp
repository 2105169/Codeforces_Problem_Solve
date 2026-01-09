#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

ll mod=1000000007;

ll nCr(ll n, ll r)
{

    if(r==1)return n;
    if(n==r)return 1;
    if(r==0)return 1;
    if(n<r)return 0;
    ll res=1;
    for(ll i=r+1; i<=n; i++){
        res *= i;
    }
    ll res2=1;
    for(ll i=2; i<=n-r; i++){
        res2*=i;

    }
    return res/res2;
}

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans=0;
    ll a0=0, a1=0;
    for(ll i=0; i<n; i++){
        if(a[i]==1)a1++;
        else a0++;
    }

    ll mid=k/2+1;

    for(ll i=mid; i<=k; i++){
        ll j=k-i;
        ll x=nCr(a1, i);
        ll y=nCr(a0, j);
        ans += (x*y)%mod;
        ans %= mod;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
