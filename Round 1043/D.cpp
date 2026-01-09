
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


void solve()
{
    ll k;
    cin>>k;
    vector<ll> vt(17), s(17);
    ll x = 9, sm=0, mf=0;
    for(ll i=1; i<=16; i++){
        vt[i]=(pow(10, i-1)*9 + mf);
        sm += (x*i);
        mf = pow(10, i-1)*9+mf;
        s[i]=sm;
        x = x*10;
    }

    if(k<10){
        cout << (k*(k+1))/2 << endl;
    }
    else{
        ll n, ans=0;
        for(ll i=1; i<=16; i++){
            if(s[i]>k){
                n = vt[i-1];
                //cout << "n: " << n << endl;
                ll t = k - s[i-1];
                ll f = t/i;
                n += f;
                ll rm = t%i;
                deque<ll> dq;
                ll nn = n+1;
                while(nn>0){
                    dq.push_front(nn%10);
                    nn/=10;
                }
                for(ll i=0; i<rm; i++)ans += dq[i];

                break;
            }
        }

        deque<ll> tt;
        ll rr = n;
        while(rr>0){
            tt.push_front(rr%10);
            rr/=10;
        }

        ll mm = 10, nn=45, xx=1;
        for(ll i=tt.size()-1; i>=0; i--){
            ll f = n/mm;
            ans += (nn*f);
            ll cc = (tt[i]*(tt[i]+1))/2;
            ans += (cc*xx);
            mm *= 10;
            nn *= 10;
            xx *= 10;
        }
        cout << ans << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}

