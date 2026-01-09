
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
    ll h, d;
    cin>>h>>d;
    ll ans=0;
    ll i=0;
    while(true){
        for(ll j=1; j<=d; j++){
            if(h>j){
                ans++;
                i++;
                h -= j;
                if(i==d){
                    cout << ans << endl;
                    return;
                }
            }
            else{
                ans++;
                h++;
                break;
            }
        }
    }
}

int main()
{
    int a=10,c=2;
    int b = a+++--c;
    cout << "b: " << b << endl;
    b = a + 2;
    cout << "b: " << b << endl;
}
