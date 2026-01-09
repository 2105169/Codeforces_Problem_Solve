
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

vector<ll> vt[500005];
map<ll,ll> mp;
ll a[500005], visited[500005];

void dfs(ll ch, ll pa){
    if(visited[ch]==0){
        visited[ch]++;
        map<ll,ll> mp2;
        for(ll i: vt[ch]){
            if(pa == i)continue;
            if(mp2[a[i]]>0)mp[a[i]]++;
            mp2[a[i]]++;
            if((a[i] == a[ch] || a[i]==a[pa]))mp[a[i]]++;
            if(visited[i]==0)dfs(i, ch);
        }
    }
}

void solve()
{
    ll n;
    cin>>n;
    
    a[0] = 0;
    
    for(ll i=0; i<=n; i++){
        vt[i].clear();
        visited[i] = 0;
        a[i] = 0;
    }
    mp.clear();

    for(ll i=1; i<=n; i++)cin>>a[i];

    for(ll i=1; i<n; i++){
        ll u, v;
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }
    dfs(1, 0);

    for(ll i=1; i<=n; i++){
        if(mp[i]>0)cout << 1;
        else cout << 0;
    }
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
