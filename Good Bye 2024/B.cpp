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
    vector<ll> a, b;
    map<ll,ll>mp;

    for(ll i=0; i<n; i++){
        ll x, y;
        cin>>x>>y;
        if(x==y)mp[x]++;
        a.push_back(x);
        b.push_back(y);
    }

    ll sum[2*n+1] = {0};
    for(ll i=1; i<=2*n; i++){
        if(mp[i]>=1){
            sum[i] = sum[i-1] + 1;
        }
        else{
            sum[i] = sum[i-1];
        }
    }

    for(ll i=0; i<n; i++){
        if(a[i]==b[i]){
            if(mp[a[i]]==1)cout << 1;
            else cout << 0;
        }
        else{
            ll u = a[i], v = b[i];
            ll s = v-u+1;
            ll ss = sum[v]-sum[u-1];
            if(s==ss)cout << 0;
            else cout << 1;
        }
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}