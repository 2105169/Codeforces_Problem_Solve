#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m;
    cin>>n>>m;
    ll a[m];
    map<ll,ll> mp;
    ll r = 1e7, mm = 1e7;
    for(ll i=0; i<m; i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    sort(a, a+m, greater<ll>());
    // if(n==1){
    //     ll x = a[0], y = a[m-1];
    //     for(ll i=0; i<6; i++){
    //         if(i%2==0){
    //             cout << x << " ";
    //         }
    //         else cout << y << " ";
    //     }
    //     cout << endl;
    //     return;
    // }
    
    ll t = 0;
    for(ll i=0, j=m-1; i<n/2; i++, j--){
        ll x = a[i], y = a[j];
        for(ll k=0; k<6; k++){
            if(k%2==0)cout << x << " ";
            else cout << y <<" ";
        }
        cout << endl;

        for(ll k=0; k<6; k++){
            if(k%2==0) cout << y << " ";
            else cout << x << " ";
        }
        cout << endl;
    }

    if(n%2==1){
        ll f = n/2;
        ll g = m-f-1;
        ll x = a[f], y = a[g];
        for(ll k = 0; k<6; k++){
            if(k%2==0)cout << x << " ";
            else cout << y << " ";
        }
        cout << endl;
    }

}

int main()
{
    int t;cin>>t;while(t--)solve();
}