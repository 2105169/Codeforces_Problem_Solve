#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n+1];
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }

    ll l[n+2], r[n+2];
    l[0] = 0;
    r[n+1] = 0;
    ll f=0, g=0;
    for(ll i=1; i<=n; i++){
        if(a[i]<=k){
            f++;
        }
        else{
            g++;
        }

        if(f>=g){
            l[i] = 1;
        }
        else {
            l[i] = 0;
        }
    }

    f = 0;
    g = 0;

    for(ll i=n; i>0; i--){
        if(a[i]<=k) f++;
        else g++;
        if(f>=g)r[i] = 1;
        else r[i] = 0;
    }

    ll ans=0;
    for(ll i=2; i<n; i++){
        if(a[i]<=k){
            if(l[i-1]==1 || l[i-2]==1)ans++;
            if(r[i+1]==1 || r[i+2]==1)ans++;
        }
    }

    ll ss=0, ls[n+1];
    for(ll i=1; i<=n; i++){
        ss += l[i];
        ls[i] = ss;
    }
    ss = 0;
    ll rs[n+1];
    for(ll i=n; i>0; i--){
        ss += r[i];
        rs[i] = ss;
    }

    for(ll i=2; i<n; i++){
        if(ls[i-1]>0 && rs[i+1]>0)ans++;
    }


    for(ll i=1; i<n; i++){
        ll x=0, y=0;
        if(l[i]==1){
            for(ll j=i+1; j<=n; j++){
                if(a[j]<=k)x++;
                else y++;
                if(x>=y){
                    ans++;
                    break;
                }
            }
        }
        if(ans>0)break;
    }
    for(ll i=n; i>1; i--){
        ll x=0, y=0;
        if(r[i]==1){
            for(ll j=i-1; j>0; j--){
                if(a[j]<=k)x++;
                else y++;
                if(x>=y)ans++;
                if(ans>0)break;
            }
        }
        if(ans>0)break;
    }

    if(ans>0)cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}