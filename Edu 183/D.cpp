
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
    if(k==0){
        for(ll i=1; i<=n; i++)cout << i << " ";
        cout << endl;
    }
    else if(k<n-1)cout << 0 << endl;
    else{
        ll a[n+1];
        for(ll i=1; i<=n; i++){
            a[i] = n-i;
        }

        ll f=n;

        ll b[n+1]={0};

        for(ll i=1; i<=n; i++){
            if(a[i]<=k){
                k -= a[i];
                b[i] = f--;
            }
        }
        ll r=1;
        for(ll i=1; i<=n; i++){
            if(b[i] == 0){
                b[i] = r++;
            }
        }
        for(ll i=1; i<=n; i++)cout << b[i] << " ";
        cout << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
