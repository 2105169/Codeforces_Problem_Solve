#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll o=0, z=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0')z++;
        else o++;
    }
    ll ans = abs(o-z)/2;
    for(ll i=ans; i<=n/2; i+=2){
        if(i==k){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}