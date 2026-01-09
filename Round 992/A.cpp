#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    ll f = 0, ans=-1;
    if(n==1){
        cout << "YES\n" << 1 << endl;
    }
    else{
    for(ll i=0; i<n; i++){
        f = 0;
        for(ll j=0; j<n; j++){
            if(i!=j){
                ll x = abs(a[i]-a[j]);
                if(x%k==0){
                    f++;
                }
            }
        }
        if(f==0){
            ans = i;
            break;
        }
    }
    if(ans==-1)cout << "NO\n";
    else cout << "YES\n" << ans+1 << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}