#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n+1], b[n+1], c[n+1];
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b+1, b+n+1);
    ll m=1; 
    for(ll i=1; i<=n; i++){
        if(a[i] <= b[k]){
            c[m++] = a[i];
        }
    }
    m--;

    ll l=1, r=m;
    while (l<=r)
    {
        if(c[l]==c[r]){
            l++;
            r--;
        }
        else{
            if(c[l]==b[k]){
                l++;
                m--;
            }
            else if(c[r]==b[k]){
                r--;
                m--;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
    }
    if(m>=k-1)cout << "YES\n";
    else cout << "NO\n";
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}