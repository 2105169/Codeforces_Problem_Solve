
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
    ll n, q;
    cin>>n>>q;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll pob[n+1], rek[n+1]={0}, val[n+1];
    for(ll i=1; i<=n; i++){
        ll t = a[i];
        ll s=0, x=0;
        while(true){
            s++;
            t/=2;
            if(t<2)break;
            else t++;
        }
        t = a[i]+1;
        while(true){
            x++;
            t/=2;
            if(t<2)break;
            else t++;
        }
        if(x>s){
            rek[i]=1;
        }
        val[i] = max(s, x);
    }

    for(ll i=1; i<=n; i++){
        pob[i] = pob[i-1] + rek[i];
    }
    ll sm[n+1]={0};
    for(ll i=1; i<=n; i++) sm[i] = sm[i-1] + val[i];
    for(ll i=0; i<q; i++){
        ll l, r;
        cin>>l>>r;
        ll ans = sm[r]-sm[l-1];
        ll d = pob[r]-pob[l-1];
        ll e = d/2 + d%2;
        ans -= e;
        cout << ans << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
