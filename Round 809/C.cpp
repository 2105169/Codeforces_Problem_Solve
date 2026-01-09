#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll ans=LLONG_MAX;
    if(n%2==0){
        a[0]=0;
        ll l[n+3]={0}, r[n+3]={0};
        l[0] = 0;
        r[n+1] = 0;
        for(ll i=2; i<n; i+=2){
            ll x=0, y=0;
            if(a[i-1]>=a[i]){
                x = a[i-1] - a[i] + 1;
            }
            if(a[i+1]>=a[i]){
                y = a[i+1]-a[i] + 1;
            }
            l[i] = max(x, y) + l[i-2]; 
            l[i+1] = l[i];
        }
        for(ll i=n-1; i>1; i-=2){
            ll x = 0, y = 0;
            if(a[i-1]>=a[i])x = a[i-1] - a[i] + 1;
            if(a[i+1]>=a[i])y = a[i+1] - a[i] + 1;
            r[i] = max(x, y) + r[i+2];
            r[i-1] = r[i];
        }
        
        

        
        for(ll i=2; i<n; i++){
            if(i%2==0){
                ll c = l[i]+r[i+2];
                ans = min(ans, c);
            }
            else{
                ll x = 0, y = 0;
                if(a[i-1]>=a[i]) x = a[i-1] - a[i] + 1;
                if(a[i+1]>=a[i]) y = a[i+1] - a[i] + 1;
                ll c = l[i-2] + r[i+2] + max(x, y);
                ans = min(ans, c);
            }
        }
    }
    else{
        ans = 0;
        for(ll i=2; i<n; i+=2){
            ll x = 0, y = 0;
            if(a[i-1]>=a[i]) x = a[i-1] - a[i] + 1;
            if(a[i+1]>=a[i]) y = a[i+1] - a[i] + 1;
            ans += max(x, y);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}