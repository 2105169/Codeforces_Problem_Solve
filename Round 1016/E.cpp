#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long
#define N 200005
ll a[N];
ll n, k;


bool check(ll x){
    set<ll> st;
    ll c=0;
    for(ll i=1; i<=n; i++){
        if(a[i]<x){
            st.insert(a[i]);
            if(st.size()==x){
                c++;
                st.clear();
            }
        }
    }
    if(c>=k)return true;
    else return false;

}

int main()
{
    int t;cin>>t;
    
    while(t--){
        cin>>n>>k;
    
        ll ans=0;
        for(ll i=1; i<=n; i++)cin>>a[i];
    
        ll l=1, r = n/k;
        while(l<=r){
            ll mid = (l+r)>>1;
            if(check(mid)){
                l = mid+1;
                ans = mid;
            }
            else{
                r = mid-1;
            }
        }
        cout << ans << endl;
    }
}