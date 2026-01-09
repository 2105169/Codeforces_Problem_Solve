#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];

    ll ans=0, f = 0, sm = 0;
    for(ll i=0; i<n; i++){
        if(b[i]>=0){
            sm += (a[i]+b[i]);
            
            f++;
            break;
        }
    }

    ll sum = 0;
    if(f>=1){
        for(ll i=0; i<n; i++){
            if(b[i]>=0){
                if(sm != (a[i] + b[i])){
                    sum++;
                }
            }
            else{
                if(a[i]>sm)sum++;
            }
        }

    }

    if(f>0){
        if(sum>0){
            
            cout << 0 << endl;
        }
        else{
            ll d = -1;
            for(ll i=0; i<n; i++){
                if(b[i]<0){
                    d = max(d, sm - a[i]);
                }
            }
            if(d>k){
                
                cout << 0 << endl;
            }
            else
                cout << 1 << endl;
        }
        
    }
    else{
        ll mx = 0;
        for(ll i=0; i<n; i++){
            mx = max(mx, a[i]);
        }
        ll mx2 = -1;
        for(ll i=0; i<n; i++){
            mx2 = max(mx2, mx - a[i]);
        }

        cout << k-mx2 + 1 << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}