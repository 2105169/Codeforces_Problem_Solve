
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    char b[n+1];
    for(ll i=1; i<=n; i++)cin>>b[i];

    ll s[n+1];

    s[0]=0;
    for(ll i=1; i<=n; i++){
        s[i]=s[i-1]+a[i];
    }

    ll l=1, r=n, ans=0;
    while(l<=r){
        if(b[l]!='L')l++;
        if(b[r]!='R')r--;
        if(b[l]=='L' && b[r]=='R'){
            ll t=s[r]-s[l-1];
            l++;
            r--;
            ans+=t;
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
