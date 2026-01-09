#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    ll ans=0, f = 1;
    for(ll i=1; i<n; i++){
        if(a[i]*2>a[i-1])f++;
        else{
            if(f>k){
                ans += (f-k);
            }
            f = 1;
        }
    }
    if(f>k)ans += (f-k);
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}