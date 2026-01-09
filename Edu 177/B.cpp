#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k, x;
    cin>>n>>k>>x;

    ll s=0;
    ll a[n];
    for(ll i=0; i<n; i++){
        ll f;
        cin>>f;
        s+=f;
        a[i] = f;
    }
    if(x>s*k)cout << 0 << endl;
    else{
        ll r = x/s;
        ll ans=0;
        ans += ((k-r)*n);
        ans++;
        ll sum = r*s;
        if(sum>=x){
            ans = ans;
        }
        else{
        for(ll i=n-1; i>=0; i--){
            sum+=a[i];
            ans--;
            if(sum>=x){
                break;
            }
        }
        
    }
    cout << ans << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}