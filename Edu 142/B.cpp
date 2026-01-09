#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    ll ans = a;
    if(a==0)cout << ans + 1LL << endl;
    else{
        ll x = a, y = a;
        ll t = min(b, c);
        ans+=t*2;
        b -= t;
        c -= t;
        ll f = min(a, max(b, c));
        ans += f;
        a -= f;
        if(b>0)b-=f;
        if(c>0)c-=f;
        f = min(a, d);
        ans += f;
        d -= f;
        if(b+c+d>0)ans++;
        cout << ans << endl;

    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}