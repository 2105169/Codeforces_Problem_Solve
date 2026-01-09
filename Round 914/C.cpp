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
    ll ans = LLONG_MAX;
    if(k>2){
        ans = 0;
    }
    else if(k==1){
        sort(a, a+n);
        for(ll i=0; i<n; i++){
            ans = min(ans, a[i]);
        }
        for(ll i=1; i<n; i++){
            ans = min(ans, abs(a[i]-a[i-1]));
        }
    }
    else if(k==2){
        sort(a, a+n);
        for(ll i=0; i<n; i++)ans = min(ans, a[i]);
        
        for(ll i=1; i<n; i++){
            ll t = abs(a[i]-a[i-1]);
            ans = min(ans, t);
            for(ll j=0; j<i; j++){
                ans = min(ans, abs(t-a[j]));
            }
        }
        

    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}