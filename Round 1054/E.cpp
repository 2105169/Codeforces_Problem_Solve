
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

ll n, k, a, b;

ll cal(vector<ll>& vt, ll k){
	ll l=0, r=0, res=0;
	map<ll,ll> mp;
	ll cnt=0;
	while(l<=r && r<n){
		mp[vt[r]]++;
		if(mp[vt[r]]==1)cnt++;
		while(cnt>k && l<=r){
			mp[vt[l]]--;
			if(mp[vt[l]]==0)cnt--;
			l++;
		}
		ll len = r-l+1;
		res += max(0LL, min(len, b) - a + 1);
		r++;
	}
	return res;
}


void solve()
{
    
	cin>>n>>k>>a>>b;
	vector<ll> vt(n, 0);
	for(ll i=0; i<n; i++)cin>>vt[i];
	cout << cal(vt, k) - cal(vt, k-1) << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
