#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n][32];
    ll x;
    for(ll i=0; i<n; i++){
        cin>>x;
        for(ll j=31; j>=0; j--){
            a[i][j] = x % 2;
            x /= 2;
        }
    }

    ll b[32]={0}, c[32]={0};
    for(ll i=31; i>=0; i--){
        for(ll j=0; j<n; j++){
            b[i] += a[j][i];
        }
        c[i] = n-b[i];
    }

    ll ans=0;

    for(ll i=0; i<n; i++){
        ll m = 0;
        for(ll j=31, k = 1; j>=0; j--, k*=2){
            if(a[i][j]==0){
                m += (b[j]*k);
            }
            else{
                m += (c[j]*k);
            }
        }
        ans = max(ans, m);
    }

    cout << ans << endl;

}

int main()
{
    int t;cin>>t;while(t--)solve();
}