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
    vector<ll> a, d;
    for(ll i=1; i<=n; i*=2){
        if(i<=n){
        a.push_back(i);
        d.push_back(i*2);
        }
    }

    vector<ll> s;
    for(ll i=0; i<a.size(); i++){
        ll aa = a[i], dd = d[i];
        s.push_back(1 + (n-aa)/dd);
    }
    vector<ll>sum;
    sum.push_back(s[0]);
    for(ll i=1; i<s.size(); i++){
        sum.push_back(sum[i-1] + s[i]);
    }

    ll x, y, ans=0;
    for(ll i=0; i<sum.size(); i++){
        if(k<=sum[i]){
            if(i==0){
                ans=0;
            }
            else{
                ans = sum[i-1];
            }
            x = a[i];
            y = d[i];
            break;
        }
    }
    ll t = x + (k-ans-1)*y;
    cout << t << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
