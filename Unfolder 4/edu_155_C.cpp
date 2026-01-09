#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

ll k=998244353;
void solve()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll a[n];
    for(ll i=0; i<n;i++)a[i]=s[i]-48;

    vector<ll>b;

    ll t=1;
    for(ll i=0; i<n-1; i++){
        if(a[i]==a[i+1]){
            t++;
        }
        else{
            b.push_back(t);
            t=1;
        }
    }
    b.push_back(t);

    ll ans=0;
    for(ll i=0; i<b.size(); i++){
        ll t = b[i]-1;
        ans+=t;
    }

    ll ans2=1;
    for(ll i=0; i<b.size(); i++){
        ans2 *=b[i];
        ans2 %=k;
    }

    for(ll i=1; i<=ans; i++){
        ans2 *= i;
        ans2%=k;
    }


    cout << ans << " " << ans2 << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
