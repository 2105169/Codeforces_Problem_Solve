
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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int b[n][35];
    for(int i=0; i<n; i++){
        int t = a[i];
        for(int j=0; j<35; j++){
            b[i][j] = t%2;
            t/=2;
        }
    }

    ll c[35]={0};
    for(int j=34; j>=0; j--){
        int f=0;
        for(int i=0; i<n; i++){
            f += b[i][j];
        }
        if(f>0)c[j] = 1;
        else c[j] = 0;
    }

    ll ans=0;
    for(int i=34; i>=0; i--)ans += c[i];
    ll mx = 0;
    for(ll i=0; i<n; i++) {
        if(mx<a[i])mx = a[i];
    }
    
     
    for(int i=0; i<k; i++){
        ll r;
        cin>>r;
        r += mx;
        int ns = ans;
        ll x=1;
        //cout << "ans " << ns << endl;
        for(int j=0; j<35; j++){
            if(c[j]==0){

                if(r>=x){
                    ns++;
                    
                }

                
            }
            x*=2;
            
        }
        cout << ns << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
