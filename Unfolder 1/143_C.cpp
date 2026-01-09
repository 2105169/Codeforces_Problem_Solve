#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1], b[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    for(ll i=1; i<=n; i++)cin>>b[i];

    ll sum[n+2] = {0};
    sum[0] = 0;
    for(ll i=1; i<=n; i++){
        sum[i] = sum[i-1] + b[i];
    }
    sum[n+1] = LLONG_MAX;
    ll extra[n+1] = {0};
    ll ans[n+1]={0};
    for(ll i=1; i<=n; i++){
        if(a[i]>=sum[n]-sum[i-1]){
            ans[i]++;
            ans[n+1]--;
        }
        else if(a[i]<=b[i]){
            extra[i] += a[i];
        }
        else{
            ll l=i, r = n;
            while(1){
                ll mid = (l+r+1)/2;
                if(a[i]>=(sum[mid]-sum[i-1]) && a[i]<(sum[mid+1]-sum[i-1])){
                    ans[i]++;
                    ans[mid+1]--;
                    extra[mid+1] += (a[i]-(sum[mid]-sum[i-1]));
                    break;
                }
                else if(a[i]>sum[mid]){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
        }
    }

    for(ll i=1; i<=n; i++){
        ans[i] += ans[i-1];
    }
    for(ll i=1; i<=n; i++){
        cout << ans[i]*b[i] + extra[i] << " ";
    }
    cout << endl;


}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
