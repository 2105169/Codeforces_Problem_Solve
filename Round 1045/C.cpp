
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


void solve()
{
    ll n;
    cin>>n;
    ll a[n+2];
    a[0] = 0;
    a[n+1] = 0;
    for(ll i=1; i<=n; i++)cin>>a[i];

    ll ans=0;


    for(ll i=2; i<=n; i += 2){
        if(a[i-1]>a[i]){
            ll t = a[i-1] - a[i];

            ans += t;
            a[i-1] -= t;
        }

        if(a[i+1]>a[i]){

           ll t = (a[i+1]-a[i]);
            ans += t;
            a[i+1] -= t;
        }
        if(a[i-1] + a[i+1]>a[i]){
            ll t = a[i+1] + a[i-1] - a[i];
            ans += t;
            a[i+1] -= t;

        }
    }

    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}

