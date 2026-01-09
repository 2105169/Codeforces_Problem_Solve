#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;cin>>t;while(t--){
        ll n, x, k;cin>>n>>x;map<ll,ll>mp;for(ll i=0; i<n; i++)cin>>k, mp[k]++;
        for(ll i=0; i<=2*100000; i++){if(mp[i]==0){cout << i << endl; break;}mp[i+x] += (mp[i]-1);}
    }
}