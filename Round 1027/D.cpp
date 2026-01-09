#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll l[n], r[n];
    deque<ll> x, y;
    
    for(ll i=0; i<n; i++){
        cin>>l[i]>>r[i];
        x.push_back(l[i]);
        y.push_back(r[i]);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    ll ans=LLONG_MAX;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    for(ll i=0; i<n; i++){
        ll u = l[i], v = r[i];
        ll mnx, mny;
        if(x[0]==u){
            mnx = x[1];
        }
        else{
            mnx = x[0];
        }

        if(y[0]==v){
            mny = y[1];
        }
        else{
            mny = y[0];
        }

        ll mxx, mxy;
        if(x[n-1]==u){
            mxx = x[n-2];
        }
        else mxx = x[n-1];
        if(y[n-1]==v)mxy = y[n-2];
        else mxy = y[n-1];

        ll d = mxx-mnx+1, s = mxy-mny+1;
        if(d*s==n-1){
            ans = min(ans, min(d,s)*(max(d,s)+1));
        }
        else ans = min(ans, d*s);
    }
    cout << ans << endl;
    return;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}