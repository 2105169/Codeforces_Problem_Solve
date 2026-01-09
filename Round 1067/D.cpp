
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

bool palindrome(ll a[], ll l, ll r)
{
    ll f=0;
    for(ll i=l, j=r; i<=r; i++, j--){
        if(a[i] != a[j])f++;
    }
    if(f==0)return true;
    else return false;
}

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1], b[n+1];
    for(ll i=0; i<n; i++){
        char c;
        cin>>c;
        a[i+1] = c - '0';
    }
    for(ll i=0; i<n; i++){
        char c;
        cin>>c;
        b[i+1] = c - '0';
    }
    
    vector<pair<ll,ll>> ans;

    for(ll i=1; i<=n; i++){
        if(a[i]==b[i]){

        }
        else{
            ll f=0;
            for(ll j=i+1; j<=n; j++){
                if(palindrome(a, i, j)){
                    f++;
                    ans.push_back({i, j});
                    for(ll k = i; k<=j; k++) a[k] = 1 - a[k];
                    break;
                }
            }
            if(f==0)break;
        }
    }
    ll t=0;
    for(ll i=1; i<=n; i++){
        if(a[i] != b[i])t++;
    }
    if(t>0)cout << -1 << endl;
    else{
        cout << ans.size() << endl;
        for(ll i=0; i<ans.size(); i++)cout << ans[i].first << " " << ans[i].second << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
