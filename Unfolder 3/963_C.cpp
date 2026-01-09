#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n], mx=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>mx)mx=a[i];
    }

    ll l=mx, r=mx+k-1;

    ll f=0;
    for(ll i=0; i<n; i++){
        ll x=(mx-a[i])/(2*k);
        ll t=a[i]+x*k*2;
        ll t2=t+k-1;
        if((t>=l && t<=r) || (t2>=l && t2<=r)){
            l=max(l, t);
            r=min(t2, r);
        }
        else if(t<=l && l<=t2){
            continue;
        }
        else{
            t=a[i]+(x+1)*k*2;
            t2=t+k-1;
            if((t>=l && t<=r) || (t2>=l && t2<=r)){
                l=max(l, t);
                r=min(t2, r);
            }
            else if(t<=l && l<=t2){
                continue;
            }
            else{
                f=1;
                break;
            }
        }
    }
    if(f==1)cout << -1 <<endl;
    else cout << l << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
