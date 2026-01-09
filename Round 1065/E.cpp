
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

vector<ll> pr;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> p;
    
    for(ll i=0; i<pr.size(); i++){
        ll x = pr[i];
        if(x<=n){
            p.push_back(x);
            
        }
        else break;
    }

    map<ll,ll> mp;

    vector<ll> vt[p.size()];

    for(ll i=0; i<p.size(); i++){
        ll m = p[i];

        for(ll j=1; j*m<=n; j++){
            ll f = j*m;
            if(mp[f]==0){
                vt[i].push_back(f);
                mp[f]++;
            }
        }
    }
    
    vector<ll> odd, ev;

    odd.push_back(1LL);


    for(ll i=0; i<p.size(); i++){
        if(vt[i].size()%2==1){
            odd.push_back(vt[i][0]);

            for(ll j=1; j<vt[i].size(); j++){
                ev.push_back(vt[i][j]);
            }
        }
        else{
            for(ll j=0; j<vt[i].size(); j++){
                ev.push_back(vt[i][j]);
            }
        }
    }

   



    
    vector<ll> ans;
    ll r = ev.size()/2;
    for(ll i=0; i<ev.size(); i+=2){
        if(odd.size()>0){
        ans.push_back(odd[odd.size()-1]);
        odd.pop_back();
        }
        ans.push_back(ev[i]);
        ans.push_back(ev[i+1]);
    }

    for(ll i=0; i<odd.size(); i++){
        ans.push_back(odd[i]);
    }
    for(ll i=0; i<ans.size(); i++)cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    ll N = 200005;
    for(ll i=2; i<=N; i++){
        if(prime(i)){
            pr.push_back(i);
        }
    }
    int t;cin>>t;while(t--)solve();
}
