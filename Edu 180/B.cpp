#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long
const ll x = 1e6;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans=x, mn = LLONG_MAX, mx = LLONG_MIN;
    for(ll i=0; i<n; i++){
        if(a[i]>=mn-1 && a[i]<=mx+1){
            ll l = LLONG_MAX, r = LLONG_MIN;
            for(ll j=i-1; j>=0; j--){
                l = min(l, a[j]);
                r = max(r, a[j]);
                if(a[i]>=l-1 && a[i]<=r+1){
                    ll t = i-j-1;
                    ans = min(ans, t);
                    break;
                }
            }
        }
        else{
            mn = min(a[i], mn);
            mx = max(a[i], mx);
        }
    }

    mn = LLONG_MAX, mx = LLONG_MIN;
    for(ll i=n-1; i>=0; i--){
        if(a[i]>=mn-1 && a[i]<=mx+1){
            ll l=LLONG_MAX, r = LLONG_MIN;
            for(ll j=i+1; j<n; j++){
                l = min(a[j], l);
                r = max(r, a[j]);
                if(a[i]>=l-1 && a[i]<=r+1){
                    ll t = j-i-1;
                    ans = min(ans, t);
                }

            }
        }
        else{
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
    }

    if(ans==x)cout << -1 << endl;
    else cout << ans << endl;

}

int main()
{
    int t;cin>>t;while(t--)solve();
}