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

    ll l = 1, r = n-2;
    while(l<r){
        if(a[l]==a[l-1] || a[r]==a[r+1]) swap(a[l], a[r]);
        l++;
        r--;
    }

    ll ans=0;
    for(ll i=0; i<n-1; i++)if(a[i]==a[i+1])ans++;
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}