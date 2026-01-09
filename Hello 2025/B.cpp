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
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    vector<ll> vt;
    map<ll,ll> mp;

    for(ll i=0; i<n;i++){
        if(mp[a[i]]==0){
            vt.push_back(a[i]);
            mp[a[i]]++;
        }
        else{
            mp[a[i]]++;
        }
    }
    
    vector<ll> v;
    for(ll i=0; i<vt.size(); i++){
        v.push_back(mp[vt[i]]);
    }

    sort(v.begin(), v.end());

    ll ans = v.size();

    for(ll i=0; i<v.size(); i++){
        if(v[i]<=k){
            ans--;
            k -= v[i];
        }
        else{
            break;
        }
    }

    ans = max(1LL, ans);

    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}