
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
    ll n, m;
    cin>>n>>m;
    vector<ll> vt[n+1];
    ll a[n], b[m+1]={0};
    
    for(ll i=0; i<n; i++){
        ll l;
        cin>>l;
        a[i] = l;
        for(ll j=0; j<l; j++){
            ll t;
            cin>>t;
            vt[i].push_back(t);
            b[t]++;
        }
    }

    ll ans=0, r=0;
    for(ll i=1; i<=m; i++){
        if(b[i]==0){
            r++;
            break;
        }
    }
    if(r>=1)ans=0;
    else{
    for(ll i=0; i<n; i++){
        ll fl=0;
        for(ll j=0; j<a[i]; j++){
            ll f = vt[i][j];
            if(b[f]==1){
                fl++;
                break;
            }
        }
        if(fl==0)ans++;
    }
}
if(ans>=2)cout << "YES\n";
else cout << "NO\n";
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
