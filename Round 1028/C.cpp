#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a, a+n);
    if(n==1){
        cout << 0 << endl;
    }
    else{
        ll t;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                ll f = gcd(a[i], a[j]);
                t = min(t, f);
                if(t==1)break;
            }
            if(t==1)break;
        }
        ll tt = gcd(a[0], a[1]);
        for(ll i=2; i<n; i++) tt = gcd(tt, a[i]);
        if(t==1){
            cout << n - mp[1] << endl;
        }
        else{
            if(t==tt){
                cout << n << endl;
            }
            else cout << n+1 << endl;
        }
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}