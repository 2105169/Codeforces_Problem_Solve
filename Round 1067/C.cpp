
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
    ll n, k;
    cin>>n>>k;
    ll a[n+2];
    ll b[n+2];
    for(ll i=1; i<=n; i++)cin>>a[i];
    for(ll i=1; i<=n; i++)cin>>b[i];

    ll mx[n+2];
    mx[0] = 0, mx[n+1] = 0;
    ll l[n+2]={0}, r[n+2] = {0};
    ll m = LLONG_MIN;
    
    ll s = 0;
    for(ll i=1; i<=n; i++){
        if(s+a[i]>=0){
            
            s += a[i];
        }
        else{
            s = 0;
        }
        l[i] = s;
    }

    s = 0;
    for(ll i=n; i>=1; i--){
        if(s+a[i]>=0)s += a[i];
        else s = 0;
        r[i] = s;
    }

    ll ans = LLONG_MIN;
    if(k%2==0){
        for(ll i=1; i<=n; i++){
            ll t = l[i-1] + r[i+1] + a[i];
            ans = max(ans, t);
        }
    }
    else{
        for(ll i=1; i<=n; i++){
            ll t = l[i-1] + r[i+1] + a[i] + b[i];
            ans = max(ans, t);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
