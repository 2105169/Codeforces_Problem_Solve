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
    ll a[204]={0};
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            ll t=i+j;
            a[t]++;
        }
    }



    vector<ll>r;
    for(ll i=0; i<204; i++){
        if(a[i]>0){
            r.push_back(a[i]);
        }
    }
    sort(r.begin(), r.end(), greater<int>());
    ll ans=0;
    for(ll i=0; i<r.size(); i++){
        if(k==0){
            break;
        }
        else{
            if(r[i]>=k){
                ans++;
                k=0;
            }
            else{
                k -= r[i];
                ans++;
            }
        }
    }



    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
