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
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans[n];

    ll k=0;

    for(ll i=n-1; i>=0; i--){
        if(a[i]>0){
            ans[i] = a[i] + k;
        }
        else{
            k -= (a[i]);
            ans[i] = k;
        }
    }

    ll res = 0;
    for(ll i=0; i<n; i++) res = max(res, ans[i]);
    k = 0;
    for(ll i=0; i<n; i++){
        if(a[i]<0){
            ans[i] = k - a[i];
        }
        else{
            k += a[i];
            ans[i] = k;
        }
    }

    for(ll i=0; i<n; i++) res = max(ans[i], res);

    ll l[n], r[n];
    k = 0;
    for(ll i=0; i<n; i++){
        if(a[i]>0)k += a[i];
        l[i] = k;
    }

    k = 0;
    for(ll i=n-1; i>=0; i--){
        if(a[i]<0)k-=a[i];
        r[i] = k;
    }
    for(ll i=0; i<n-1; i++){
        res = max(res, l[i]+r[i+1]);
    }
    res = max(res, l[n-1]);
    res = max(res, r[0]);

    cout << res << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}