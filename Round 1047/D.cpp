
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
    map<ll,ll> mp;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll f=0;

   

    map<ll,ll> mp2;

    vector<ll> on;

    for(ll i=0; i<n; i++){
        ll ff = mp[a[i]];
        if(ff % a[i] == 0){
            if(mp2[a[i]]==0){
                on.push_back(a[i]);
                mp2[a[i]]++;
            }
        }
        else{
            f++;
        }
    }
    //cout << "dulal\n";
    
    if(f>0)cout << -1 << endl;
    else{
        ll l=1;
        vector<ll> v[n+1];
        for(ll i=0; i<on.size(); i++){
            ll t = mp[on[i]]/on[i];
            for(ll j=0; j<t; j++){
                for(ll k=0; k<on[i]; k++){
                    v[on[i]].push_back(l);
                }
                l++;
            }
        }
        for(ll i=0; i<n; i++){
            cout << v[a[i]].back() << " ";
            v[a[i]].pop_back();
        }
        cout << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
