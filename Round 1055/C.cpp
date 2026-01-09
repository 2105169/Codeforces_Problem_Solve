
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
    ll a[n+1], z[n+1], o[n+1];
    z[0]=o[0] = 0;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]==0) z[i] = z[i-1] + 1;
        else z[i] = z[i-1];
        if(a[i]==1)o[i] = o[i-1] + 1;
        else o[i] = o[i-1];
    }

    ll dd[n+2]={0};
    for(ll i=1; i<n; i++){
        if(a[i]==a[i+1])dd[i]=1;
    }
    ll ff[n+2]={0};
    for(ll i=1; i<=n; i++)ff[i] = ff[i-1] + dd[i];
    for(ll i=0; i<q; i++){
        ll l, r;
        cin>>l>>r;
        ll f = z[r]-z[l-1];
        ll x = o[r]-o[l-1];
        if(f%3==0 && x%3==0){
            ll t = (f+x)/3;
            if(ff[r-1]-ff[l-1]>0)cout <<t << endl;
            else cout << t + 1 << endl;
        }
        else cout << -1 << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
