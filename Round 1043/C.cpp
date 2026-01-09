

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

ll v[20], val[20];

void solve()
{
    ll n;
    cin>>n;

    ll ans=0;
    for(ll i=0; i<20; i++){
        if(v[i]>n){
            for(ll j=i-1; j>=0; j--){
                while(true){
                    if(v[j]<=n){
                        ans += val[j];
                        n -= v[j];
                    }
                    else break;
                }
            }
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    ll r = 1, x=0;
    for(ll x=0; x<20; x++){
        v[x] = r;
        ll f = r/3;
        r *= 3;
        val[x] = r + x * f;
    }
    int t;cin>>t;while(t--)solve();
}
