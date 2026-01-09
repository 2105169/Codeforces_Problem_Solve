#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

ll N = 998244353;
ll mod = N;

ll min(ll a, ll b)
{
    if(a>b)return b;
    else return a;
}

ll fast_power(ll n, ll m) {
 	ll ans = 1;
 	while (m>0) {
 		if (m % 2==1){
 			ans *= n;
            ans %= mod;
        }
 		n *= n;
        n %= mod;
 		m /= 2;
 	}
 	return ans;
}


ll mul_mode(ll a, ll b)
{
    ll res = ((a%mod) * (b%mod) ) % mod;
    return res;
}

ll mod_inv(ll n)
{
	ll p=mod-2;
	ll res=1;
	while(p > 0)
	{
		ll bit=p&1;
		if(bit) res=(res*n)%mod;
		n=(n*n)%mod;
		p=p>>1; 
	}
	return res;
}


ll div_mode(ll a, ll b)
{
    ll x = mod_inv(b);
    ll res = ((a%mod) * (x%mod)) % mod;
    return res;
}


void solve()
{
    ll n, q;
    cin>>n>>q;
    ll a[n], b[n], c[n], d[n];
    
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    for(ll i=0; i<n; i++){
        cin>>b[i];
    }

    for(ll i=0; i<n; i++){
        c[i] = a[i];
        d[i] = b[i];
    }

    sort(a, a+n);
    sort(b, b+n);

    ll ans = 1;

    for(ll i=0; i<n; i++){
        ll f = min(a[i], b[i]);
        ans = mul_mode(ans, f);
    }

    vector<ll> vt;
    vt.push_back(ans);

    for(ll i=0; i<q; i++){
        ll o, x;
        cin>>o>>x;
        x--;
        if(o==1){
            
            ll t = c[x];
            c[x]++;
            
            ll in = upper_bound(a, a+n, t) - a - 1;
            

           
            ll pre = min(a[in], b[in]);
            a[in]++;
            ll post = min(a[in], b[in]);
            ans = div_mode(ans, pre);
            ans %= N;
            ans = mul_mode(ans, post);
            ans %= N;
            vt.push_back(ans);

        }
        else{
            ll t = d[x];
            d[x]++;

            ll in = upper_bound(b, b+n, t) - b - 1;
            ll pre = min(b[in], a[in]);
            b[in]++;
            ll post = min(b[in], a[in]);
            ans = div_mode(ans, pre);
            ans %= N;
            ans = mul_mode(ans, post);
            ans %= N;
            vt.push_back(ans);
        }
    }
    
    for(ll i=0; i<vt.size(); i++)cout<<vt[i] << " ";
    cout << endl;
}



int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
}