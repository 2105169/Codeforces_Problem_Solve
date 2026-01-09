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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    ll odd=0, ev=0;
    for(ll i=0; i<n; i++){
        if(a[i] % 2==0)ev++;
        else odd++;
    }
    ll ans=0;
    if(ev>0){
        ans++;
        ans += odd;
    }
    else{
        ans = odd-1;
    }
    cout << ans << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}