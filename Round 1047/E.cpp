
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
    ll a[n], b[n], c[n], d[n];
    for(ll i=0; i<n;i++)cin>>a[i];

    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        mp[a[i]]++;
    }
    ll ans;
    for(ll i=0; i<=n+1; i++){
        if(mp[i]==0){
            ans = i;
            break;
        }
    }

    for(ll i=0; i<n; i++){
        if(a[i]>ans)b[i] = ans;
        else if(mp[a[i]]==1)b[i] = a[i];
        else b[i] = ans;
    }

    mp.clear();
    for(ll i=0; i<n; i++)mp[b[i]]++;
    for(ll i=0; i<n+2; i++){
        if(mp[i]==0){
            ans = i;
            break;
        }
    }

    for(ll i=0; i<n; i++){
        if(b[i]>ans)c[i] = ans;
        else if(mp[b[i]]==1)c[i] = b[i];
        else c[i] = ans;
    }

    mp.clear();
    for(ll i=0; i<n; i++)mp[c[i]]++;
    for(ll i=0; i<n+2; i++){
        if(mp[i]==0){
            ans=i;
            break;
        }
    }

    for(ll i=0; i<n; i++){
        if(c[i]>ans)d[i] = ans;
        else if(mp[c[i]]==1)d[i] = c[i];
        else d[i] = ans;
    }

    ll bb=0, cc=0, dd=0;
    for(ll i=0; i<n; i++){
        bb += b[i];
        cc += c[i];
        dd += d[i];
    }
    if(k==1)cout << bb << endl;
    else if(k==2) cout << cc << endl;
    else if(k==3) cout << dd << endl;
    else{
        if(k%2==0){
            cout << cc << endl;
        }
        else{
            cout << dd << endl;
        }
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
