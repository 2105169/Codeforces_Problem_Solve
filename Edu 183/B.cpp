
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
    string s;
    cin>>s;
    ll a[k+1];
    ll z=0,o=0,t=0;
    for(ll i=0; i<k; i++){
        if(s[i] == '0')z++;
        else if(s[i] == '1')o++;
        else t++;
    }
    
    ll b[n+1]={0};

    for(ll i=1; i<=z; i++)b[i] = -1;
    for(ll i=n; i>n-o; i--){
        b[i] = -1;
    }

    for(ll i=z+1; i<z+1+t; i++){
        if(b[i]==0){
            b[i] = 1;
        }
    }

    for(ll i=n-o; i>n-o-t; i--){
        if(b[i]==0){
            b[i] = 1;
        }
    }
    if(n==k){
        for(ll i=1; i<=n; i++)b[i] = -1;
    }
    for(ll i=1; i<=n; i++){
        if(b[i] == -1)cout << '-';
        else if(b[i] == 1)cout << '?';
        else cout << '+';
    }
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
