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
    ll n;
    cin>>n;
    ll a[n+1];
    string s;
    cin>>s;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            a[i+1] = 0;
        }
        else{
            a[i+1] = 1;
        }
    }

    ll ans=0;
    for(ll i=1; i<=n; i++){
        if(a[i]==0)ans += i;
    }   


    queue<ll> o;
    for(ll i=n; i>0; i--){
        if(a[i]==1)o.push(i);
        else{
            if(o.size()>0)o.pop();
        }
    }


    ll t = o.size()/2;
    for(ll i=0; i<t; i++)o.pop();
    ll f = o.size();
    for(ll i=0; i<f; i++){
        ll x = o.front();
        
        ans += x;
        o.pop();
    }
    cout << ans << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}