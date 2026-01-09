
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
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    if(n==1)a[0] += k;
    else if(k%2==1){
        for(ll i=0; i<n; i++){
            if(a[i]%2==1)a[i] += k;
        }
    }
    else{
        ll t=0, r=a[0];
        for(ll i=0; i<n; i++){
            if(r == a[i] && r>1)t++;
        }
        if(t!=n){
            ll f = k-1;
            if(k==2){
                for(ll i=0; i<n; i++){
                    if((a[i]+2)%3==0)a[i] +=2;
                    else if((a[i]+4)%3==0) a[i] += 4;
                }
            }
            else{

            for(ll i=0; i<n; i++){
                //ll dv = a[i]/f;
                ll rm = a[i] % f;
                rm = f - rm;
                if(rm != f){
                    a[i] = a[i] + rm*k;
                }
            }
            }
        }
    }

    for(ll i=0; i<n; i++)cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}

