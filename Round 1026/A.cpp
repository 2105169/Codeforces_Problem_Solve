#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    sort(a, a+n);
    ll ans=LLONG_MAX;
    for(ll i=0; i<n; i++){
        for(ll j=n-1; j>=i; j--){
            if(a[i] % 2== a[j]%2){
                ll f = i + n-j-1;
                ans = min(ans, f);
            }
        }
    }
    cout << ans << endl;
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}