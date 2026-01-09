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

    ll b[n+1];
    b[n] =  0;
    for(ll i=n;i>0; i--){
        ll t = 0;
        for(ll j=i+1; j<=n; j++){
            if(a[j]>a[i])t++;
        }
        b[i] = t;
    }
    ll ans = n-1;
    for(ll i=1; i<n; i++){
        ans = min(ans, b[i] + i-1);
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
