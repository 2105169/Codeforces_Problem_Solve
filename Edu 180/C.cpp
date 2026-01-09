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
    map<ll,ll> mp;
    for(ll i=0; i<1e5+10; i++)mp[i] = -1;
    sort(a, a+n);
    for(ll i=0; i<n; i++){
        ll f = a[i];
        mp[f] = i;
    }
    ll mx = a[n-1];
    for(ll i=1; i<1e5+10; i++){
        mp[i] = mp[i-1];
    }
    ll ans=0;
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n-1; j++){
            ll t = a[i] + a[j];
            
            if(t>mx){
                
                ans += (n-1-j);
            }
            else{
                for(ll k=j+1; k<n-1; k++){
                    
                    if(t+a[k]>mx){
                        for(ll l=k; l<n-1; l++){
                            if(t>a[k]){
                                ans++;
                            }
                        }
                        break;
                    }
                }
            }            
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}