
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
    ll ans=0, prime = 0;
    vector<ll> one(n+1), two_same(n+1), two_diff(n+1), cnt(n+1);
    //cout << "dulal\n";

    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        vector<ll> pf = prime_factor(x);

        if(pf.size()>2)continue;

        if(pf.size()==1){
            one[x]++;
            prime++;
            ans += (prime - one[x] + two_same[x] + two_diff[x]);
        }
        else if(pf[0]==pf[1]){
            two_same[pf[0]]++;
            ans += (one[pf[0]] + two_same[pf[0]]);
        }
        else{
            two_diff[pf[0]]++;
            two_diff[pf[1]]++;
            cnt[x]++;
            ans += (one[pf[0]] + one[pf[1]] + cnt[x]);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
