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
    ll n;
    cin>>n;
    ll ans=0;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    map<ll,ll>mp;

    ll sum=0;
    for(ll i=0; i<n; i++){
        sum += a[i];
        if(mp[sum]>0){
            ans++;
            sum=0;
            mp.clear();
        }
        else if(sum==0){
            ans++;
            mp.clear();
        }
        else{
            mp[sum]++;
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

