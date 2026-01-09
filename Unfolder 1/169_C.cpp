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
    sort(a, a+n, greater<ll>());
    ll al=0, bob=0;
    for(ll i=1; i<n; i+=2){
        ll aa=a[i-1];
        ll bb=a[i];
        ll t=abs(aa-bb);
        if(t<=k){
            a[i] += t;
            k -= t;
        }
        else{
            a[i] += k;
            k=0;
        }
    }
    for(ll i=0; i<n; i+=2){
        al += a[i];
    }
    for(ll i=1; i<n; i+=2){
        bob += a[i];
    }

    cout << al-bob << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
