
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
    n *= 2;
    ll b[n+1] = {0};
    vector<ll> vt;
    for(ll i=0; i<n; i++){
        ll t;
        cin>>t;
        b[t]++;
        if(b[t]==1){
            vt.push_back(t);
        }
    }

    ll fr=0, odd=0, ans=0;
    for(ll i=0; i<vt.size(); i++){
        ll t = b[vt[i]];
        if(t%2==0){
            if(t%4==0){
                fr++;
            }
            else{
                ans += 2;
            }
        }
        else{
            ans++;
            odd++;
        }
    }
    ans += (fr*2);
    if(fr%2==1){
        if(odd==0)ans -= 2;
    }

    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
