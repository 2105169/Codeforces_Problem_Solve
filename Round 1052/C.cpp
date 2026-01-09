
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
    ll a[n+2]={0};
    a[0]=1;
    a[n+1] = 1;
    for(ll i=0; i<n; i++){
        if(s[i]=='0')a[i+1] = 0;
        else a[i+1] = 1;
    }

    ll f=0;
    for(ll i=1; i<=n; i++){
        if(a[i]==0 && a[i-1]==1 && a[i+1]==1)f++;
    }

    if(f>0)cout << "NO\n";
    else{

        ll b[n+1]={0};
        for(ll i=1; i<=n; i++){
            if(a[i]==1)b[i] = i;
        }

        ll l=1, r=1, i=1;
        while(i<=n){
            if(a[i]==0){
                l = i;
                while(i<=n+1){
                    if(a[i]==1){
                        r = i-1;
                        break;
                    }
                    else i++;
                }
                ll ff=r;
                for(ll j=l; j<=ff; j++){
                    b[j] = r--;
                }
            }
            else i++;
        }
        cout << "YES\n";
        for(ll i=1; i<=n; i++)cout << b[i] << " ";
        cout << endl;

    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
