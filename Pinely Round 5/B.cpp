
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
    char a[n][n];

    ll mx1=-1e9, mn1=1e9, mx2=-1e9, mn2=1e9, mx3=-1e9, mn3=1e9, mx4=-1e9,mn4=1e9;
    
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>a[i][j];
            if(a[i][j] == '#'){
                mx1 = max(mx1, i+j);
                mn1 = min(mn1, i+j);

                mx2 = max(mx2, i-j);
                mn2 = min(mn2, i-j);

                mx3 = max(mx3, i);
                mn3 = min(mn3, i);
                
                mx4 = max(mx4, j);
                mn4 = min(mn4, j);
            }
        }
    }
    if(mx1-mn1<=1 || mx2-mn2<=1 || (mx3-mn3<=1 && mx4-mn4<=1))cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
