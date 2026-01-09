#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[k];
    for(ll i=0; i<k; i++)cin>>a[i];
    ll mx=0;
    for(ll i=0; i<k; i++){
        if(mx<a[i])mx=a[i];
    }

    for(ll i=0; i<k; i++){
        if(mx==a[i]){
            a[i]=0;
            break;
        }
    }

    ll ans=0;
    ll t=n-mx;
    ans+=t;
    for(ll i=0; i<k; i++){
        if(a[i]>1){
            a[i]--;
            ans+=a[i];
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
