#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, x;
    cin>>n>>x;
    if(n==1 && x==0)cout << -1 << endl;
    else{
        ll a[32], ans;
        ll f = x, one =0;
        for(ll i=0; i<32; i++){
            a[i] = f % 2;
            f /= 2;
            one += a[i];
        }

        if(x==1){
            if(n%2==0){
                ans = n-1 + 4;
            }
            else ans = n;
        }
        else if(x==0){
            if(n%2==0){
                ans = n;
            }
            else{
                ans = n-1 + 4;
            }
        }
        else if(n<=one){
            ans = x;
        }
        else{
            ll t = n-one;
            ll ls = a[0];
            if(ls){
                if(t%2)t++;
            }
            else{
                if(t%2)t++;
            }
            ans = x + t;
            
        }
        cout << ans << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}