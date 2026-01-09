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
    ll n, m;
    cin>>n>>m;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<m; i++)cin>>b[i];

    sort(b, b+m);

    if(a[0]>b[0]-a[0]){
        a[0] = b[0] - a[0];
    }



    for(ll i=1; i<n; i++){
        ll mn = a[i-1], mx = a[i];
        if(a[i]>a[i-1]){
            ll l = 0, r = m;
            while (l<=r)
            {
               ll mid = (l+r+1)/2;
               ll x = b[mid]-a[i];
               if(x>=mn && x<=mx){
                a[i] = x;
                mx = x;
                r = mid;
               }
               else if(x<mn){
                l = mid+1;
               }
               else{
                r = mid-1;
               }

            }
            
        }
        else if(a[i] < a[i-1]){
            ll mn = a[i-1];
            ll l=0, r = m;
            while(l<=r){
                ll mid = (l+r+1)/2;
                ll x = b[mid] - a[i];
                if(x>=mn){
                    a[i] = x;
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
        }
    }

    ll f=0;
    for(ll i=0; i<n-1; i++){
        if(a[i]>a[i+1])f++;
    }
    if(f>0)cout << "NO\n";
    else cout << "YES\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}