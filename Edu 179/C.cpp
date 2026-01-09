#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    map<ll,ll> mp;
    ll pre;
    ll ans = LLONG_MAX;
    pre = a[0];
    mp[a[0]]++;
    ans = min(ans, (n-1)*a[0]);

    for(ll i=1; i<n; i++){
        if(a[i]==pre){
            mp[a[i]]++;
            ll t = mp[pre];
            ans = min(ans, (n-t)*pre);
        }
        else{
            ll t = mp[pre];
            ans = min(ans, (n-t)*pre);
            mp[pre] = 0;
            pre = a[i];
            mp[pre]++;
        }
    }

    ll t = mp[pre];
    ans = min(ans, (n-t)*pre);

    
    cout << ans << endl;
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}