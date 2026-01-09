#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n, x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans=0;



    ll sum=0;

    ll l=0, r = n-1;
    while(1){
        sort(a, a+n, greater<ll>());
        if(a[0]>0){
            ans += a[0];
            ll s = a[0]*x;
            for(ll i=0; i<n; i++){
                if(a[i]<=s){
                    s -= a[i];
                    a[i] = 0;
                }
                else{
                    a[i] -= s;
                    s = 0;
                    break;
                }
            }
        }
        else break;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

