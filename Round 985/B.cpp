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
    string s, r;
    cin>>s;
    cin>>r;
    ll a1=0, a0=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0')a0++;
        else a1++;
    }

    ll ans=1;
    for(ll i=0; i<n-1; i++){
        ll t = min(a1, a0);
        if(t<=0){
            ans = 0;
            break;
        }
        else{
            if(r[i]=='0')a1--;
            else{
                a0--;
            }
        }
    }
    if(ans==1)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}