#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll l, r;
    cin>>l>>r;
    ll a[32], b[32];
    ll le = l, re = r;
    for(ll i=31; i>=0; i--){
        if(l%2==1)a[i] = 1;
        else a[i] = 0;
        if(r%2==1)b[i] = 1;
        else b[i] = 0;
        l /= 2;
        r /= 2;
    }

    ll c[32] = {0};
    for(ll i=0; i<32; i++){
        ll x = a[i] + b[i];
        if(x==2){
            c[i] = 1;
        }
        else if(x==0){
            c[i] = 0;
        }
        else {
            c[i] = 1;
            break;
        }
    }

    ll ans=0, f = 1;
    for(ll i=31; i>=0; i--){
        ll t = f * c[i];
        ans += t;
        f *= 2;
    }

    if(ans==re)ans--;
    cout << ans-1 << " " << ans << " " << ans+1 << endl;
}
 

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
