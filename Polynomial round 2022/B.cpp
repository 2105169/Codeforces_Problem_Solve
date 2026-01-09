#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    ll a[m];
    for(ll i=0; i<m; i++)cin>>a[i];

    ll mx = n/k;
    ll mn = n-k*mx;
    ll ans=1;

    if(m<k)ans=0;
    else{
        ll t, f=0;

        for(ll i=0; i<m; i++){
            
            if(a[i]>mx+1){
                ans = 0;
                break;
            }
            else{
                if(a[i]==mx+1){
                    f++;
                }
            }
        }

        if(ans==1){
            if(f>mn)ans=0;
        }
    }
    
    if(ans==1)cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}

// 37084 5 5
// 7417 7417 7417 7417 7416