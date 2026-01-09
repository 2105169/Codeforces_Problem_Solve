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
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans=0, s = 0;
    for(ll i=0; i<n; i++){
        if(a[i]>=k)s+=a[i];
        if(a[i]==0){
            if(s>0){
                s = s-1;
                ans++;
            }
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
