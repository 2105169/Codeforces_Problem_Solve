
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
    ll l, r;
    cin>>l>>r;
    map<ll,ll> mp;
    ll ans=0;
    for(ll i=l; i<=r; i++)mp[i] = -1;
    vector<ll> vt;
    
    for(ll i=r; i>=l; i--){
       if(mp[i]==-1){
            ll a[32]={0}, k = i;
            for(ll j=0; j<32; j++){
                a[j] = k%2;
                k/=2;
            }

            ll b[32]={0};

            for(ll j=31; j>=0; j--){
                if(a[j]==1){
                    b[j] = 0;
                    for(ll f=j-1; f>=0; f--){
                        b[f] = 1-a[f];
                    }
                    break;
                }
            }

            ll f=0, ff=1;

            for(ll j=0; j<32; j++){
                f += (ff*b[j]);
                ff *= 2;
            }

            if(f>=l && f<=r){
                mp[i] = f;
                mp[f] = i;
            }
            else{
                vt.push_back(i);
                    if(f>=l)
                    vt.push_back(f);
            }
       }
    }

    for(ll i=0; i<vt.size(); i++){
        ll u = vt[i], v = vt[vt.size()-1-i];
        mp[u] = v;
    }

    for(ll i=l; i<=r; i++){
        ll t = mp[i] | i;
        ans += t;
    }

    cout << ans << endl;
    for(ll i=l; i<=r; i++)cout << mp[i] << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
