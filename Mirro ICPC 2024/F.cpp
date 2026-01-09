
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
    string a, b;
    cin>>a;
    cin>>b;
    int none=0, multiple=0;
    for(int i=0; i<n; i++){
        if(a[i] == '.' && b[i] == '#'){
            if(a[i+1] == '.'){
                a[i] = '#';
                a[i+1] = '#';
            }
            else{
                none = 1;
                break;
            }
        }
        else if(a[i]=='#' && b[i] == '.'){
            if(b[i+1] == '.'){
                b[i] = '#';
                b[i+1] = '#';
            }
            else{
                none = 1;
                break;
            }
        }
        else if(a[i]=='.' && b[i] == '.'){
            if(a[i+1] == '.' && b[i+1] == '.'){
                multiple = 1;
                a[i] = '#';
                b[i] = '#';
            }
        }
    }
    if(none>0)cout << "None\n";
    else if(multiple>0)cout << "Multiple\n";
    else cout << "Unique\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
