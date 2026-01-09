#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    ll a[n+1], t[n+1];
    a[0]=0;
    for(ll i=1; i<=n; i++){
        cin>>t[i];
        a[i] = a[i-1]^t[i];
    }
    char b[n+1];
    for(ll i=1; i<=n; i++)cin>>b[i];

    ll ans[2]={0};
    for(ll i=1; i<=n; i++){
        if(b[i]=='0'){
            ans[0]^=t[i];
        }
        else{
            ans[1]^=t[i];
        }
    }

    ll q;
    cin>>q;
    vector<ll> hum;
    for(ll i=0; i<q; i++){
        ll d;
        cin>>d;
        if(d==1){
            ll l, r;
            cin>>l>>r;
            ll x = a[l-1]^a[r];
            ans[0]^=x;
            ans[1]^=x;
        }
        else{
            ll m;
            cin>>m;
            hum.push_back(ans[m]);
        }
    }
    for(ll i=0; i<hum.size(); i++)cout << hum[i] << " ";
    cout << endl;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
