#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m;
    cin>>n>>m;
    ll a[n+1], b[m+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    for(ll i=1; i<=m; i++)cin>>b[i];
    




        ll lx[n+1]={0}, rx[n+1]={0};
        ll x = 1, y = n-m+1;
        for(ll i=1; i<=m; i++){
            ll ch = 0;
            for(ll j=x; j<=n; j++){
                if(b[i]<=a[j]){
                    x = j+1;
                    
                    lx[i] = j;
                    ch = 1;
                    break;
                }
            }
            if(ch==0)break;
            
        }

        x = n, y = n-m; 
        for(ll i=m; i>0; i--){
            ll ch = 0;
            for(ll j=x; j>=1LL; j--){
                if(b[i]<=a[j]){
                    x = j-1;
                    ch = 1;
                    rx[i] = j;
                    break;
                }
            }
            if(ch == 0)break;
        }

        
        
        ll ans = LLONG_MAX;
        if(m==1){
            ans = b[1];
        }
        else{
            if(rx[2]>0)ans = min(ans, b[1]);
            if(lx[m-1]>0)ans = min(ans, b[m]);
        }

        

        for(ll i=2; i<m; i++){
            ll f = lx[i-1], g = rx[i+1];
            if(f>0 && g>0 && f < g){
                ans = min(ans, b[i]);
            }
        }

        if(lx[m]>0 || rx[1]>0)cout << 0 << endl;
        else{
            if(ans == LLONG_MAX){
                cout << -1 << endl;
            }
            else
                cout << ans << endl;
        }
   
}

int main()
{
    int t;cin>>t;while(t--)solve();
}