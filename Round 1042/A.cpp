
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n], b[n], ans=1;
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];
    for(ll i=0; i<n; i++){
        if(a[i]>b[i])ans += (a[i]-b[i]);
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
