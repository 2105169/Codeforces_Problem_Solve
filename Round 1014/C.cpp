#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    ll k=0, m=0;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        ans+=x;
        k += (x%2);
        m = max(m, x);
    }
    if(k==0 || k==n)cout << m << endl;
    else cout << ans - k + 1 << endl;

}

int main()
{
    int t;cin>>t;while(t--)solve();
}