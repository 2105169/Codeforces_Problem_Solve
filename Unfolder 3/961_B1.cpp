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
    ll n, m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    sort(a, a+n);

    ll sum=0;
    sum+=a[0];
    vector<ll> r, s;

    for(ll i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            r.push_back(sum);
            s.push_back(a[i]);
            sum=0;
            sum+=a[i+1];
        }
        else{
            sum+=a[i+1];
        }
    }
    r.push_back(sum);
    s.push_back(a[n-1]);

    ll ans=0;
    for(ll i=0; i<s.size()-1; i++){
        if(s[i+1]-s[i]==1){
            ll x=r[i+1]+r[i];
            if(x>m){
                ans = max(ans,m);
            }
            else{
                ans=max(x, ans);
            }
        }
        else{
            if(r[i]>m){
                ans=max(ans,m);
            }
            else{
                ans=max(ans, r[i]);
            }
        }
    }
    if(r[r.size()-1]>m){
        ans=max(ans, m);
    }
    else{
        ans=max(ans, r[r.size()-1]);
    }
   cout << ans << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

