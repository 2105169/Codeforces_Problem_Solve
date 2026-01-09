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
    ll a[n+1];
    
    for(ll i=1; i<=n; i++)cin>>a[i];
    sort(a+1, a+n+1);
    
    ll ans = LLONG_MAX;
    ll mx = n, mn = n-2;
    while(1){
        if(a[mx]<a[mn] + a[mn+1]){
            ll t = n-mx + mn-1;
            ans = min(ans, t);
            mn--;
        }
        else{
            ll f = n-mx + 1 + mn-1;
            ans = min(f, ans);
            mx--;
        }
        if(mx-mn<2){
            mn--;
            if(mx-mn<2)mn--;
            if(mx-mn<2)mn--;
        }
        if(mn<1){
            break;
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