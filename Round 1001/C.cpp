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
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll s = 0;
    for(ll i=1; i<=n; i++)s+=a[i];
    ll ans = s;

    ll len = n;
    for(ll i = len; i>1; i--){
      for(ll j=1; j<i; j++){
        a[j] = a[j+1]-a[j];
      }
      s = 0;
      for(ll j=1; j<i; j++)s+=a[j];
      ans = max(ans, abs(s));
    }

    cout << ans << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}