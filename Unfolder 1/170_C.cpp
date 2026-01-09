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
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    sort(a, a+n);
    vector<ll> s;
    s.push_back(a[0]);
    for(ll i=1; i<n; i++){
        if(a[i] != a[i-1]){
            s.push_back(a[i]);
        }
    }
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        mp[a[i]]++;
    }

    vector<ll> first, last;
    ll f = 0;
    first.push_back(s[f]);
    for(ll i=1; i<s.size(); i++){
        if(s[i]-s[i-1]!=1){
            last.push_back(s[i-1]);
            first.push_back(s[i]);
        }
    }
    last.push_back(s[s.size()-1]);


    ll ans=0;
    for(ll i=0; i<first.size(); i++){
        ll l = first[i], r = last[i];
        ll d = r-l+1;
        if(d>=k){
            ll sum = 0;
            for(ll j=l; j<l+k; j++){
                sum+=mp[j];
            }
            ans = max(ans, sum);
            for(ll j=l+k; j<=r; j++){
                sum += mp[j];
                sum -= mp[j-k];
                ans = max(ans, sum);
            }
        }
        else{
            ll sum=0;
            for(ll j=l; j<=r; j++){
                sum += mp[j];
            }
            ans = max(ans, sum);
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

