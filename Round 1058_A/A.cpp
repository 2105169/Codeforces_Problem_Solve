
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


ll query(vector<ll>& v){
    cout << "? " << v.size() << " ";
    for(ll i=0; i<v.size(); i++)cout << v[i] << " ";
    cout << endl;
    ll x;
    cin>>x;
    return x;
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll> vt, s, t;
    ll ans[2*n+1] = {0};
    for(ll i=1; i<=2*n; i++){
        s.push_back(i);
        ll x = query(s);
        if(x>0){
            ans[i] = x;
            s.pop_back();
            t.push_back(i);
        }
    }

    for(ll i=1; i<=2*n; i++){
        if(ans[i]==0){
            t.push_back(i);
            ll x = query(t);
            ans[i] = x;
            t.pop_back();
        }
    }

    cout << "! ";
    for(ll i=1; i<=2*n; i++)cout << ans[i] << " ";
    cout << endl;

    

}

int main()
{
    int t;cin>>t;while(t--)solve();
}
