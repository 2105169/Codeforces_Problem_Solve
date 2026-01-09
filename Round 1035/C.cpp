#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, l, r, k;
    cin>>n>>l>>r>>k;
    ll ans;
    if(n%2)ans = l;
    else if(n==2){
        ans = -1;
    }
    else{

        
            ll a[64]={0}, x=l, y=r;
            for(ll i=0; i<64; i++){
                if(x%2)a[i] = 1;
                else a[i]=0;
                x /= 2;
            }
            ll b[64]={0};
            for(ll i=63; i>=0; i--){
                if(a[i]==1){
                    b[i+1]=1;
                    break;
                }
            }
            
            ll f = 1, g=0;
            for(ll i=0; i<64; i++){
                g += (f*b[i]);
                f *=2;
            }

            if(g>r)ans = -1;
            else{
                if(k==n || k==n-1)ans = g;
                else ans = l;
            }
        }
         cout << ans << endl;
    }
   


int main()
{
    int t;cin>>t;while(t--)solve();
}