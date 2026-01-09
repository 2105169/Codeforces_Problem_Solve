
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
    string s;
    cin>>s;
    ll a[n+5]={0};
    for(ll i=0; i<n; i++){
        if(s[i] == '0')a[i+1] = 0;
        else a[i+1] = 1;
    }   

    if(a[1]==0)a[0]=0;
    else a[0] = 1;
    if(a[n]==0)a[n+1]=0;
    else a[n+1] = 1;

    vector<ll> t;
    for(ll i=0; i<=n; i++){
        if(a[i]==1 && a[i+1]==1){
            t.push_back(i+1);
        }
    }

    ll f=0;
    if(t.size()<2){

    }
    else{
    for(ll i=0; i<t.size()-1; i++){
        ll z=0;
        for(ll j=t[i]; j<=t[i+1]; j++){
            if(a[j]==0)z++;
        }
        ll d=0;
        for(ll j=t[i]; j<=t[i+1]; j++){
            if(a[j]==0 && a[j+1]==0)d++;
        }
        if(d==0){
            if(z%2==1)f++;
        }
    }
}

    if(f>0)cout << "NO\n";
    else cout << "YES\n";
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
