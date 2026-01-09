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
    ll ans = 0;
    ll f;
    while(n--){
        if(a[n]>=0){
            ll t = a[n];
            for(ll i=n-1; i>=0; i--){
                if(a[i]>=0){
                    f = (a[i]+t)/k;
                    break;
                }
            }
            ll l = 0, r = n-1;
            while(l<=r){
                ll mid = (l+r+1)/2;
                if(((t+a[mid])/k)>=f){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            ll x = (a[r]+t)/k;
            ans += x;
            a[r] = -100;
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

