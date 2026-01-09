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
    ll a[n+1], b[n+1];
    a[0] = 0, b[0] = 0;
    for(ll i=1; i<=n; i++){
        cin>>a[i]>>b[i];
    }
    ll x[n+1] = {0}, y[n+1]={0};

    for(ll i=1; i<=n; i++){
        if(b[i]==0){
            x[a[i]]++;
        }
        else{
            y[a[i]]++;
        }
    }

    ll sx = 0, sy=0;
    for(ll i=0; i<=n; i++){
        sx += x[i];
        sy += y[i];
    }
    ll ans=0;
    for(ll i=0; i<=n; i++){
        if(x[i]==1 && y[i]==1){
            ans += (sx-1);
            ans += (sy-1);
        }
    }
    for(ll i=1; i<n; i++){
        if(y[i]==1 && x[i-1]==1 && x[i+1]==1)ans++;
        if(x[i]==1 && y[i-1]==1 && y[i+1]==1)ans++;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
