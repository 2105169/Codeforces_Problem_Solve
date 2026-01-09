
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
    ll a[n], b[n];
    for(ll i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    ll d3 = LLONG_MIN, d4 = LLONG_MAX;
    for(ll i=0; i<n; i++){
        d3 = max(a[i]+b[i], d3);
        d4 = min(d4, b[i] - a[i]);
    }

    ll x;
    cout << "? R " << 1000000000 << endl;
    cin>>x;
    cout << "? R " << 1000000000 << endl;
    cin>>x;
    cout << "? D " << 1000000000 << endl;
    cin>>x;
    cout << "? D " << 1000000000 << endl;
    cin>>x;
    ll res1 = d4 - x + 4000000000;

    cout << "? U " << 1000000000 << endl;
    cin>>x;
    cout << "? U " << 1000000000 << endl;
    cin>>x;
    cout << "? U " << 1000000000 << endl;
    cin>>x;
    cout << "? U " << 1000000000 << endl;
    cin>>x;
    ll res2 = d3 + x - 4000000000;

    cout << "! " << (res2-res1)/2 << " " << (res1 + res2)/2 << endl;
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
