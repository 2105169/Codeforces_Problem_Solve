#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m;
    cin>>n>>m;
    ll a[m];
    ll s=0;
    for(ll i=0; i<m; i++){
        cin>>a[i];
    }
    

    sort(a, a+m);
    ll sm[m];
    sm[m-1] = a[m-1];
    for(ll i=m-2; i>=0; i--){
        sm[i] = sm[i+1] + a[i];
    }


    for(ll i=0; i<m-1; i++){
        ll l=i+1, r = m-1;
        ll ans = -1LL;
        while(l<=r){
            ll mid = (l+r+1)/2;
            if(a[mid]+a[i]>=n){
                r = mid-1;
                ans = mid;
            }
            else{
                l = mid + 1;
            }
        }

        if(ans>-1){
            ll t = m - ans;
            ll f = (sm[ans] + a[i]*t - (t*(n-1)));
            cout << f << " ";
            s += f;
        }
    }
    cout << endl;

    cout << 2*s << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}