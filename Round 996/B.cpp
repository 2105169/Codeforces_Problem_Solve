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
    ll a[n], b[n];
    for(ll i=0; i<n;i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];
    vector<ll> vt;
    
    ll x=0, l=0, m = LLONG_MAX;
    for(ll i=0; i<n; i++){
        if(a[i]<b[i]){
            x++;
            l = b[i]-a[i];
        }
        else{
            m = min(m, a[i]-b[i]);
        }
    }
    if(x==0)cout << "YES\n";
    else if(x==1){
        if(m>=l)cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}