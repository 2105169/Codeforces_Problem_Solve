#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long
#define neg -1E15

ll sub(ll a[], ll n){
    ll ans = 0;
    ll s=0;
    for(ll i=0; i<n; i++){
        if(s+a[i]<0){
            ans = max(ans, s);
            s = 0;
        }
        else{
            ans = max(ans, s);
            ans = max(ans, s+a[i]);
            s += a[i];
        }
    }
    return ans;
}

ll leftside(ll a[], ll l, ll r){
    ll ans = 0;
    for(ll i=l; i<=r; i++){
        if(ans+a[i]>=0){
            ans += a[i];
        }
        else{
            ans = 0;
        }
    }
    return ans;
}

ll rightside(ll a[], ll l, ll r){
    ll ans = 0;
    for(ll i=r; i>=l; i--){
        if(ans + a[i]>=0){
            ans += a[i];
        }
        else ans = 0;
    }
    return ans;
}

void solve()
{
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll in = -1;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            if(in==-1){
                in = i;
            }
            else{
                a[i] = neg;
            }
        }

    }

    ll l = leftside(a, 0, in-1);
    ll r = rightside(a, in+1, n-1);
    a[in] = k - l - r;
    ll t = sub(a, n);
    if(t==k){
        cout << "YES\n";
        for(ll i=0; i<n; i++)cout << a[i] << " ";
        cout << endl;
    }
    else cout << "NO\n";
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}