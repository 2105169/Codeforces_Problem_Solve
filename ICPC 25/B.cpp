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




int main()
{
    ll n, d, s;
    cin>>n>>d>>s;
    ll t = min(n/2, d);
    ll f = t/s;
    ll ans = max(f*s*2, s);
    cout << ans << endl;
}