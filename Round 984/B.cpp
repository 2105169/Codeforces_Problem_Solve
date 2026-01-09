#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll b[k], c[k];
    for(ll i=0; i<k; i++){
        cin>>b[i]>>c[i];
    }
    ll ans=0;
    if(n>=k){
        for(ll i=0; i<k; i++)ans += c[i];
    }
    else{
        ll v[k+1]={0};
        for(ll i=0; i<k; i++){
            v[b[i]] += c[i];
        }
        sort(v, v+k+1, greater<ll>());
        for(ll i=0; i<n; i++)ans += v[i];
    }
    cout << ans << endl;
}   


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}