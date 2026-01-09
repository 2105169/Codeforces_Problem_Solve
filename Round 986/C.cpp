#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, v;
    cin>>n>>m>>v;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll ans;
    ll sum[n+1] = {0};

    for(ll i=1; i<=n; i++) sum[i] = sum[i-1] + a[i];
       
    ll k=0, s=0;
    ll pos[n+1]={0};
    for(ll i=1; i<=n; i++){
        s += a[i];
        if(s>=v){
            k++;
            pos[k] = i;
            s = 0;
            if(k==m)break;
        }
    }

    if(k<m){
        ans=-1;
    }
    else{
        ans = sum[n]-sum[pos[m]];
        
        ll r = n;
        for(ll i=m-1; i>=0; i--){
            ll f=0;
            while(f<v){
                f += a[r];
                r--;
            }
            
            ll q = pos[i];
            ll g = sum[r] - sum[q];
            ans = max(g, ans);
            
        }
        
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}