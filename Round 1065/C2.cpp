
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
    int n;
    cin>>n;
    int a[n], b[n];
    int as=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        as ^= a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
        as ^= b[i];
    }

    if(as==0){
        cout << "Tie\n";
    }
    else{
        int bit;
        for(int i=0; i<21; i++){
            if(as & (1<<i)){
                bit = i;
            }
        }

        int ind;

        for(int i=n-1; i>=0; i--){
            if((a[i] ^ b[i]) & (1<<bit)){
                ind = i;
                break;
            }
        }
        if(ind % 2==0)cout << "Ajisai\n";
        else cout << "Mai\n";
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
