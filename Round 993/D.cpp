#include<bits/stdc++.h>

#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans[n] = {0};
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        if(mp[a[i]]==0){
            mp[a[i]]++;
            ans[i] = a[i];
        }
    }

    vector<ll> baki, c;
    for(ll i=0; i<n; i++){
        if(ans[i]==0){
            baki.push_back(i);
        }
    }
    for(ll k=1; k<=n; k++){
        if(mp[k]==0){
            c.push_back(k);
        }
    }
    for(ll i=0; i<baki.size(); i++){
        ans[baki[i]] = c[i];
    }
    

    for(ll i=0; i<n; i++)cout << ans[i] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}