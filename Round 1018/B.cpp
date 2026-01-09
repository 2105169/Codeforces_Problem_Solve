#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll l[n], r[n];
    for(ll i=0; i<n; i++)cin>>l[i];
    for(ll i=0; i<n; i++)cin>>r[i];
    ll ans=0;
    ll c[n];
    for(ll i=0; i<n; i++){
        ans += max(l[i], r[i]);
        c[i] = min(l[i], r[i]);
    }

    map<ll,ll> mp;
    
    for(ll i=0; i<n; i++){
        
        mp[c[i]]++;
    }

    k--;
    ll f = 0;
    for(auto it = mp.rbegin(); it != mp.rend(); ++it){
        ll t = it->first;
        ll g = it->second;
        ll d;
        if(f+g>=k){
            d = k-f;
            ans += (d*t);
            ans++;
            break;
        }
        else{
            ans += t*g;
            f += g;
        }
    }
    cout << ans << endl;
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}