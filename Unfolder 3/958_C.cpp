
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
    ll n;
    cin>>n;
    ll t=n;
    ll a[60];
    for(ll i=0; i<60; i++){
        if(t&1)a[i]=1;
        else a[i]=0;
        t>>=1;
    }

    vector<ll>ans;
    ans.push_back(n);

    ll cnt=0;
    for(ll i=0; i<60; i++){
        if(a[i]==1)cnt++;
    }

    for(ll i=0; i<60; i++){
        if(a[i]==1){
            a[i]=0;
            ll m=1, r=0;
            for(ll j=0; j<60; j++){
                r +=(m*a[j]);
                m *= 2;
            }
            if(r>0)
            ans.push_back(r);

            a[i]=1;
        }
    }

    cout << ans.size() << endl;
    for(ll i=ans.size()-1; i>=0; i--)cout << ans[i] << " ";
    cout << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
