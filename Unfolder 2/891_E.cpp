#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a, a+n);
    ll sum[n];
    sum[0] = a[0];
    for(ll i=1; i<n; i++) sum[i] = sum[i-1] + a[i];
    if(n==1)cout << 1 << endl;
    else{
    map<ll, ll> mp;
    ll s=sum[n-1]-sum[0] - (a[0]*(n-1) - (n-1)) + 1;
    mp[a[0]] = s;
    for(ll i=1; i<n-1; i++){
        if(mp[a[i]]==0){
            ll p = sum[n-1]-sum[i]- ((n-i-1)*a[i] - (n-i-1));
            ll t = a[i] * i - (sum[i-1] - i);
            mp[a[i]] = p+t+1;
        }
    }

    ll q = a[n-1] * (n-1) - (sum[n-2] - (n-1));
    mp[a[n-1]] = q+1;
    for(ll i=0; i<n; i++){
        cout << mp[b[i]] << " ";
    }
    cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
