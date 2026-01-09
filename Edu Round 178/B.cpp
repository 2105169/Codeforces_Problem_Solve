#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll mx[n+1];
    mx[0] = 0;
    for(ll i=1; i<=n; i++) mx[i] = max(mx[i-1], a[i]);
    ll sm[n+2],s=0;
    sm[n+1] =0;
    for(ll i=n; i>0; i--){
        s += a[i];
        sm[i] = s;
    }

    for(ll i=n; i>=1; i--){
        ll f = sm[i+1] + mx[i];
        cout << f << " ";
    }
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}