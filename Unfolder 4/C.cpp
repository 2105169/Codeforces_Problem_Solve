
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

ll median(ll a[], ll n)
{
    sort(a, a+n);
    ll x=a[n-1];
    ll t=n-1;

    if(n%2==1){
        t=t/2;
        return a[t]+x;
    }
    else{
        t=t/2-1;

        return a[t]+x;
    }
}

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];

    ll ans=0, md=k/2;
    for(ll i=0; i<n; i++){
        if(b[i]==1){
            a[i] += md;

            ans=max(ans, median(a, n));
            a[i] -=md;
            a[i] += k;
            ans=max(ans, median(a, n));
            a[i] -= k;
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
