
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
    ll t = n, ln=0;
    while(true){
        if(t>0)ln++;
        else break;
        t /= 10;
    }
    ll r = 1;
    vector<ll> ans;
    for(ll i=0; i<ln; i++){
        r *= 10;
        if(n%(r+1)==0)ans.push_back(n/(r+1));
    }
    cout << ans.size() << endl;
    for(ll i=ans.size()-1; i>=0; i--){
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}

