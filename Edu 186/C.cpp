
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
    ll a[2*n+1], b[2*n+1], c[2*n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    for(ll i=1; i<=n; i++)a[n+i] = a[i];

    for(ll i=1; i<=n; i++)cin>>b[i];
    for(ll i=1; i<=n; i++)b[n+i] = b[i];
    
    for(ll i=1; i<=n; i++)cin>>c[i];
    for(ll i=1; i<=n; i++)c[n+i] = c[i];

    ll x = 0;
    for(ll i=1; i<=n; i++){
        ll f=0;
        for(ll j=1; j<=n; j++){
            if(b[j]<=a[i+j-1]){
                f++;
                break;
            }
        }
        if(f==0)x++;
    }
    

    ll y = 0;
    for(ll i=1; i<=n; i++){
        ll f=0;
        for(ll j=1; j<=n; j++){
            if(c[j]<=b[i+j-1]){
                f++;
                break;
            }
        }
        if(f==0)y++;
    }

    cout << n*x*y << endl;


}

int main()
{
    int t;cin>>t;while(t--)solve();
}
