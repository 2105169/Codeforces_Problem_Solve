

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
    ll k, l1, r1, l2, r2;
	cin>>k>>l1>>r1>>l2>>r2;
	ll ans=0;

	for(ll i=0; i<=60; i++){
		ll x = pow(k, i);
		if(x*l1>r2)break;
		ll mx = min(r1, r2/x);
		ll mn = max(l1, (l2+x-1)/x);
		ll f = mx-mn+1;
		ans += max(0LL, f);
	}

	cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}