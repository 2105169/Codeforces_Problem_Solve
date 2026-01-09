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
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    if(n%2==0){
        ll x = LLONG_MIN;
        for(ll i=1; i<=n; i+=2){
            x = max(x, a[i+1]-a[i]);
        }
        cout << x << endl;
    }
    else{
        ll pre[n+1], post[n+1];
        if(n==1){
            cout << 1 << endl;
        }
        else{
            ll mn = LLONG_MIN;
            pre[1] = a[2]-a[1];
            pre[2] = a[2]-a[1];
            mn = pre[1];
            for(ll i=3; i<=n; i+=2){
                ll f = a[i+1]-a[i];
                mn = max(mn, f);
                pre[i] = mn;
                pre[i+1] = mn;
            }

            ll mx = a[n]-a[n-1];
            post[n] = mx;
            post[n-1] = mx;
            for(ll i=n-2; i>0; i-=2){
                mx = max(mx, a[i]-a[i-1]);
                post[i] = mx;
                post[i-1] = mx;
            }

            ll ans = post[2];
            for(ll i=3; i<=n-2; i+=2){
                ll x = max(post[i+1], pre[i-1]);
                ans = min(ans, x);
            }
            ans = min(ans, pre[n-1]);
            cout << ans << endl;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}