#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

ll decimal(ll a[], ll f){
    ll b[60];
    for(ll i=0; i<60; i++){
        if(f&1)b[i] = 1;
        else b[i] = 0;
        f>>=1;
    }

    ll c[60];
    ll x = 0;
    for(ll i=0; i<60; i++){
        c[i] = b[i] ^ a[i];
    }
    ll k = 1;
    for(ll i=0; i<60; i++){
        x += c[i] * k;
        k*=2;
    }
    return x;
}

void solve()
{
    ll x, m;
    cin>>x>>m;
    
    ll a[60]={0};
    ll f = x;
    for(int i=0; i<60; i++){
        if(f&1){
            a[i] = 1;
        }
        else a[i] = 0;
        f>>=1;
    }


    ll ans=0;
    map<ll, ll>mp;
    for(ll i=1; i<=x/2; i++){
        if(x%i==0 && i <= m){
            ll r = decimal(a, i);
            if(r<=m){
            ans++;
            mp[r]++;
            mp[i]++;
            }
        }
    }
    ll k = 400;

    for(ll i=1; i<=min(m,k); i++){
        if(i!=x){
            ll r = decimal(a, i);
            if(r % i==0){
                if(mp[r]==0 && mp[i]==0 && r<=m){
                    ans++;
                    mp[r]++;
                    mp[i]++;
                }
            }
        }
    }
    cout << ans <<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}