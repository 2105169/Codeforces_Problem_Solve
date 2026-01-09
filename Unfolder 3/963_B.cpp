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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    vector<ll> od, ev;

    for(ll i=0; i<n; i++){
        if(a[i]%2==0)ev.push_back(a[i]);
        else od.push_back(a[i]);
    }

    ll ans=0;
    if(ev.size()==0 || od.size()==0){
        ans=0;
    }
    else{
        sort(ev.begin(), ev.end(), greater<ll>());
        sort(od.begin(), od.end(), greater<ll>());
        ll mx=od[0];
        for(ll i=ev.size()-1; i>=0; i--){
            if(mx>ev[i]){
                ans++;
                mx+=ev[i];
                ev[i]=0;
            }
        }

        for(ll i=0; i<ev.size(); i++){
            if(ev[i]>mx){
                mx+=ev[i];
                ans+=2;
                ev[i]=0;
            }
            if(ev[i]>0){
                ev[i]=0;
                ans++;
            }
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
