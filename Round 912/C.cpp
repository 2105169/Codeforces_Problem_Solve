#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll s[n+1] = {0};
    for(ll i=n-1; i>=0; i--){
        s[i] = s[i+1] + a[i];
    }
    ll ans=s[0];
    for(ll i=1; i<n; i++)if(s[i]>0)ans+=s[i];
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}