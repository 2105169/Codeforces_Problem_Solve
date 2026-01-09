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
    ll n, x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    ll ans=0, cnt=0, now=0;
    for(ll i=n-1; i>=0; i--){
        if(now+a[i]<=x){
            cnt++;
            now+=a[i];
        }
        else{
            now=0;
        }
        ans+=cnt;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
