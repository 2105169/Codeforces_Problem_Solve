#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;

    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    
    ll ans=0;
    if(k>1){
    sort(a, a+n, greater<ll>());
    for(ll i=0; i<=k; i++)ans+=a[i];
    
    }
    else{
        ll t = 0;
        for(ll i=1; i<n-1; i++){
            t = max(t, a[i]);
        }
        ans = a[0] + a[n-1];
        ans = max(ans, t + a[0]);
        ans = max(ans, t+a[n-1]);

    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}