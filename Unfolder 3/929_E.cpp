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
    ll sum[n+1];
    sum[0]=0;
    for(ll i=1; i<=n; i++){
        sum[i]=a[i-1]+sum[i-1];
    }

    ll q;
    cin>>q;
    vector<ll>ans;
    for(ll i=0; i<q; i++){
        ll l, u;
        cin>>l>>u;
        ll d=-1;
        ll r=l, mx=0;
        for(ll j=r; j<=n; j++){
            ll m=sum[j]-sum[l-1];
            ll t=(m*(2*u+(1-m)))/2;
            if(mx<t){
                mx=t;
                r=j;
            }
        }
        ans.push_back(r);
    }
    for(ll i=0; i<ans.size(); i++)cout << ans[i] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
