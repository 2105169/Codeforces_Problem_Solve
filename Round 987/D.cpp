#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];

    ll mx[n+1];
    
    mx[1] = a[1];
    for(ll i=2; i<=n; i++){
        mx[i] = max(mx[i-1], a[i]);
    }

    map<ll, ll> mp;
    for(ll i=0; i<=n; i++)mp[i] = 0;
    
       
    for(ll i=n; i>0; i--){
        ll x = mx[i];
        for(ll j=a[i]+1; j<=mx[i]; j++){
            if(mp[j]>0){
                break;
            }
            else{
                mp[j] = max(x, mp[x]);
                mp[x] = mp[j];
            }
        }
    }

    for(ll i=1; i<=n; i++){
        cout << max(mx[i], mp[mx[i]]) << " ";
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}