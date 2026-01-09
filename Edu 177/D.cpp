
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define int long long

const int MOD = 998244353;

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
	return res%MOD;
}

int bpow(int x, int p){
	int res = 1;
	while(p){
		if (p % 2){
			res = (res * x) % MOD;
		}
		p >>= 1;
		x = (x * x) % MOD;
	}
	return res;
}

int factorial(int n){
	int res = 1;
	for(int i=1; i<=n; i++){
		res = (res*i) % MOD;
	}

	return res%MOD;
}


bool prime(int n)
{
    if(n<2)return false;
    else if(n==2)return true;
    else if(n%2==0){
        return false;
    }
    else{
        for(int i=3; i<=sqrt(n); i+=2){
            if(n%i==0)return false;
        }
    }
    return true;
}


void solve()
{
    int a[26];
    for(int i=0; i<26; i++)cin>>a[i];
    int s = 0;
    for(int i=0; i<26; i++)s += a[i];


    int dp[s+1] = {0};
    dp[0] = 1;
    for(int i=0; i<26; i++){
        if(a[i]>0){
            for(int j=s; j>=0; j--){
                if(a[i] + j <= s){
                    dp[a[i] + j] = (dp[a[i] + j] + dp[j]) % MOD;
                }
            }
        }
    }



    int ans = dp[s/2] * factorial(s/2) % MOD * factorial((s+1)/2) % MOD;
    //cout << ans << endl;

    for(int i=0; i<26; i++){

        ans = (ans * power(factorial(a[i]), MOD-2)) % MOD;
    }

    cout << ans << endl;
}

signed main()
{
    int t;cin>>t;while(t--)solve();
    return 0LL;
}
