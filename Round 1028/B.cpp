#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long
const ll N = 1e5+1;
const ll mod = 998244353;
ll val[N];

void solve()
{
    ll n;
    cin>>n;
    ll a[n], b[n];
    map<ll, ll> ia, ib;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        ia[a[i]] = i;
    }
    for(ll i=0; i<n; i++){
        cin>>b[i];
        ib[b[i]] = i;
    }

    ll ma = -1, mb = -1;
    ll r[n];
    for(ll i=0; i<n; i++){
        ma = max(ma, a[i]);
        mb = max(mb, b[i]);
        ll aa = b[i-ia[ma]];
        ll bb = a[i-ib[mb]];
        if(ma==mb){
            if(ma + aa> mb + bb){
                r[i] = (val[ma] + val[aa]) % mod;
            }
            else{
                r[i] = (val[mb] + val[bb]) % mod;
            }
        }
        else{
            if(ma>mb){
                r[i] = (val[ma] + val[aa]) % mod;
            }
            else{
                r[i] = (val[mb] + val[bb]) % mod;
            }
        }
    }

    for(ll i=0; i<n; i++)cout << r[i] << " ";
    cout << endl;
}

int main()
{
    ll p=1;
    for(ll i=0; i<N; i++){
        val[i] = p;
        p *= 2;
        p = p % mod;
    }
    int t;cin>>t;while(t--)solve();
}