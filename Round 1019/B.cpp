#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll t=0;
    for(ll i=0; i<n-1; i++){
        if(s[i]=='1' && s[i+1]=='0' && t==0){
            t++;
        }

        if(t==1  && s[i+1] == '1'){
            t++;
        }
    }

    ll ans=0, pre = 0;
    ll a[n];
    for(ll i=0; i<n; i++){
        if(s[i]=='0')a[i] = 0;
        else  a[i] = 1;
    }
    for(ll i=0; i<n; i++){
        if(pre == a[i]) ans++;
        else{
            ans += 2;
            pre = 1-pre;
        }
    }
    cout << ans - t << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}