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
    ll n, x, y;
    cin>>n>>x>>y;

    ll a[n+1];
    
    for(ll i=1; i<=n; i++)cin>>a[i];

    sort(a+1, a+n+1);

    ll sum = 0;

    for(ll i=1; i<=n; i++)sum+=a[i];
    ll left = sum-y, right = sum-x;

    ll ans=0;
    for(ll i=1; i<n; i++){
        ll f = a[i];
        ll l = i+1, r = n;

        ll li = -1;
        ll t = 0;
        while(l<=r){
            ll mid = (l+r)/2;
            ll s = sum - (f + a[mid]);
            if(s>=x && s<=y){
                li = mid;
                r = mid;
            }
            else if(s<x){
                r = mid;
            }
            else if(s>y){
                l = mid+1;
            }
            if(t>0)break;
            if(l==r){
                if(t==0){
                    t++;
                }
            }
        }

        

        ll ri=-1;
        l = i+1, r = n;
        t = 0;
        while(l<=r){
            ll mid = (l+r)/2;
            ll s = sum - (f + a[mid]);
            if(s>=x && s<=y){
                l = mid+1;
                ri = mid;
            }
            else if(s<x){
                r = mid;
            }
            else if(s>y){
                l = mid+1;
            }
            if(t>0)break;
            if(l==r){
                if(t==0){
                    t++;
                }
            }
        }


        if(li==-1 || ri == -1){
            ans += 0;
        }
        else{
            ans += ri-li + 1;
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}