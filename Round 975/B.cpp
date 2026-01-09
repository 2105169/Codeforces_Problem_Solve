#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n, k;
    cin>>n>>k;
    ll a[n], b[k];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<k; i++)cin>>b[i];

    map<ll,ll> mp;
    for(ll i=1; i<n-1; i++){
        ll t = (n-i)*i + n-1-i;
        mp[t]++;
        ll f = a[i+1]-a[i]-1;
        t -= (i);
        mp[t] = mp[t] + f;
    }

    mp[n-1] = mp[n-1] + 2;
    mp[n-1] = mp[n-1] + a[1]-a[0]-1;
    for(ll i=0; i<k; i++)cout << mp[b[i]] << " ";
    cout << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}