
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

const ll MOD = 998244353;

int power(int base, int pwr){
	int res = 1;
	//pwr = MOD - 2 // if inverse power
	while(pwr){
		if (pwr % 2){
			res = (res * base) % MOD;
		}
		pwr >>= 1;
		base = (base * base) % MOD;
	}
	return res;
}

int factorial(int n){
	int res = 1;
	for(int i=1; i<=n; i++){
		res = (res*i) % MOD;
	}

	return res;
}


bool prime(ll n)
{
    if(n<2)return false;
    else if(n==2)return true;
    else if(n%2==0){
        return false;
    }
    else{
        for(ll i=3; i<=sqrt(n); i+=2){
            if(n%i==0)return false;
        }
    }
    return true;
}

vector<ll> prime_factor(ll x){
    vector<ll> pf;
    for(ll i=2; i*i<=x; i++){
        while(x % i == 0){
            pf.push_back(i);
            x = x/i;
        }
    }
    if(x>1)pf.push_back(x);
    return pf;
}


void solve()
{
    ll n;
    cin>>n;
    ll a[n+1], b[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    for(ll i=1; i<=n; i++)cin>>b[i];

    ll c[n+1], d[n+1];
    ll mn = b[n];
    for(ll i=n; i>=1; i--){
        if(b[i]<mn)mn = b[i];
        d[i] = mn;
    }
    mn = a[1];
    for(ll i=1; i<=n; i++){
        if(a[i]<mn)mn = a[i];
        c[i] = mn;
    }

    ll l=0;
    for(ll i=1; i<=n; i++){
        ll t = min(c[i], d[i]);
        l = max(l, t);
    }

    ll mx = a[1];
    for(ll i=1; i<=n; i++){
        if(a[i]>mx)mx = a[i];
        c[i] = mx;
    }

    mx = b[n];
    for(ll i=n; i>=1; i--){
        if(b[i]>mx)mx = b[i];
        d[i] = mx;
    }

    ll r = 2*n;
    for(ll i=n; i>=1; i--){
        ll t = max(c[i], d[i]);
        r = min(r, t);
    }
    
   ll ans =0;
   for(ll i=1; i<=l; i++){
    ll t = max(l, r);
    ans += (2*n-t+1);
   }
   cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
