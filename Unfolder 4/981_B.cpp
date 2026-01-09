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
    ll a[n+1][n+1];
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }

    ll ans=0;
    for(ll i=1; i<=n; i++){
        ll t = LLONG_MAX;
        for(ll j=i, k=1; j<=n; j++, k++){
            t = min(t, a[j][k]);
        }
        if(t<0){
            t = abs(t);
            ans+=t;
        }
    }

    for(ll i=2; i<=n; i++){
            ll t = LLONG_MAX;
        for(ll j=i, k=1; j<=n; j++, k++){
            t = min(t, a[k][j]);
        }
        if(t<0){
            t = abs(t);
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

