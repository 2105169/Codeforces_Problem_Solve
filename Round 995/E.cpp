#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin>>n>>k;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];
    sort(a, a+n);
    sort(b, b+n);

    ll ans = a[0]*n;

    for(ll i=1; i<n; i++){
        ll f = -1;
        if(a[i]>=b[0]){
            f = 0;
        }
        else if(a[i]>b[n-1]){
            f=-1;
        }
        else{
            ll l = 0, r = n-1;
            while(true){
                ll mid = (l+r)/2;
                if(a[i]>=b[mid]){
                    f = mid;
                    r = mid;
                }
                else{
                    l = mid+1;
                }
                if(l==r){
                    if(a[i]>=b[l]){
                        f = l;
                    }
                    break;
                }
            }
        }
        f = n-f;

        ll d = n-i;

        ll con = f-d;
        if(con<=k){
            ans = max(ans, f*a[i]);
        }
    }


    for(ll i=0; i<n; i++){
        ll f = n-i;
        ll d = n;
        ll l=0, r = n-1;
        while(true){
            ll mid = (l+r)/2;
            if(b[i]<=a[mid]){
                d = mid;
                r = mid;
            }
            else{
                l = mid+1;
            }

            if(l==r){
                if(b[i]<=a[l]){
                    d = mid;
                }
                break;
            }
        }

        ll con = f-d;
        if(con<=k)
            ans = max(ans, f*b[i]);
    }
    cout << ans << endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}