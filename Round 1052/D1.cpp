
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
    int l, r;
    cin>>l>>r;
    map<int,int> mp;
    ll ans=0;
    for(int i=0; i<=r; i++)mp[i] = -1;
    
    for(int i=r; i>=0; i--){
       if(mp[i]==-1){
            int a[20]={0}, k = i;
            for(int j=0; j<20; j++){
                a[j] = k%2;
                k/=2;
            }
            int b[20]={0};
            for(int j=19; j>=0; j--){
                if(a[j]==1){
                    b[j] = 0;
                    for(int f=j-1; f>=0; f--){
                        b[f] = 1-a[f];
                    }
                    break;
                }
            }
            int f=0, ff=1;
            for(int j=0; j<20; j++){
                f += (ff*b[j]);
                ff *= 2;
            }
            mp[i] = f;
            mp[f] = i;
       }
    }
    for(int i=0; i<=r; i++){
        int t = mp[i] | i;
        ans += t;
    }
    cout << ans << endl;
    for(int i=0; i<=r; i++)cout << mp[i] << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
