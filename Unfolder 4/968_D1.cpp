#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, m;
    cin>>n>>m;
    ll ans=0;
    for(ll i=0; i<n; i++){
        ll l;
        cin>>l;
        map<ll, ll> mp;
        for(ll j=0; j<l; j++){
            ll t;
            cin>>t;
            mp[t]++;
        }
        ll f=0;
        for(ll j=0; j<l+5; j++){
            if(mp[j]==0){
                f++;
            }
            if(f==2){
                ans = max(ans, j);
                break;
            }
        }
        mp.clear();
    }

    ll ans2=0;
    if(ans>=m){
        ans2 = (m+1)*ans;
    }
    else{
        ans2 += ((ans+1)*ans);
        ll a=ans+1, n = m-ans;
        ll b=(n*(2*a + (n-1)))/2;
        ans2 += b;
    }
    //cout << ans << " ";
    cout << ans2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}

