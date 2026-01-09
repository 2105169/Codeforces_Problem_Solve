#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+2];
    a[n+1] = 0;
    for(ll i=1; i<=n; i++)cin>>a[i];

    if(n%2==1){
        cout << "YES\n";
    }
    else{
        ll s = 0;
        for(ll i=1; i<=n; i++){
            if(i%2==0){
                s+=a[i];
            }
            else s -=a[i];
        }
        if(s>=0)cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}